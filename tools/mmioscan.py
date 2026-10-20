import re,sys,glob,tomllib,bisect
syms=tomllib.load(open(sys.argv[1],'rb'))['section'][0]['functions']
known=set(re.findall(r'"([A-Za-z_0-9]+)"',open(sys.argv[3]).read()))
fs=sorted((f['vram'],f['vram']+f['size'],f['name']) for f in syms); starts=[f[0] for f in fs]
hits={}
for p in glob.glob(sys.argv[2]+'/**/*.s',recursive=True):
    for line in open(p):
        m=re.match(r'\s*/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]{8}) \*/\s+lui\b',line)
        if m:
            v=int(m.group(2),16)&0xFFFF
            if 0xA400<=v<=0xA4FF or 0xBFC0<=v<=0xBFCF or 0xA500<=v<=0xA5FF or 0xA800<=v<=0xAFFF or v in (0xB000,):
                a=int(m.group(1),16); i=bisect.bisect_right(starts,a)-1
                if fs[i][0]<=a<fs[i][1]: hits.setdefault(fs[i],set()).add(hex(v))
for f,v in sorted(hits.items()):
    print(('OK   ' if f[2] in known else 'NEED ')+hex(f[0]),f[2],hex(f[1]-f[0]),sorted(v))
