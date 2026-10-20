import csv, re, sys
ctx, n64sym_txt, out, ovr = sys.argv[1:5]
funcs = {}
for r in csv.DictReader(open(ctx)):
    if r['category']=='symbol' and r['getType']=='@function' and r['sectionType']=='.text' and r['isDefined']=='True' and int(r['getVrom'],16)!=0:
        a=int(r['address'],16); funcs[a]=dict(name=r['getName'], size=int(r['getSize'],16), rom=int(r['getVrom'],16))
names={}
for line in open(n64sym_txt):
    m=re.search(r'([0-9A-F]{8}) (\S+)\s*$', line)
    if m: names.setdefault(int(m.group(1),16), m.group(2))
ov={}
for l in open(ovr):
    l=l.split('#')[0].split()
    if len(l)==2: ov[int(l[0],16)]=l[1]
for a,n in ov.items():
    if n=='-': names.pop(a,None)
    else: names[a]=n
used=set(); hits=0; miss=[]
for a in sorted(funcs):
    n=names.get(a)
    if n: hits+=1
    else: n=funcs[a]['name']
    base=n; i=1
    while n in used: i+=1; n=f"{base}_{i}"
    used.add(n); funcs[a]['name']=n
for a,n in names.items():
    if a not in funcs and a>=0x80000400: miss.append((hex(a),n))
s=sorted(funcs); start=s[0]; rom0=funcs[start]['rom']
end=max(a+funcs[a]['size'] for a in s)
# sanity: rom contiguous
for a in s: assert funcs[a]['rom']-rom0==a-start, hex(a)
with open(out,'w') as f:
    f.write('[[section]]\nname = ".text"\nrom = 0x%X\nvram = 0x%X\nsize = 0x%X\n\nfunctions = [\n'%(rom0,start,end-start))
    for a in s: f.write('    { name = "%s", vram = 0x%08X, size = 0x%X },\n'%(funcs[a]['name'],a,funcs[a]['size']))
    f.write(']\n')
print(f"{len(funcs)} functions, {hits} named by n64sym, text 0x{start:X}-0x{end:X}, rom 0x{rom0:X}")
print("n64sym names not at a function start:", len(miss)); print(miss[:40])
