import subprocess,sys,glob,struct,tomllib,re,os
rom=open(sys.argv[1],'rb').read()
syms=tomllib.load(open(sys.argv[2],'rb'))['section'][0]['functions']
objdir=sys.argv[3]; lo=int(sys.argv[4],16) if len(sys.argv)>4 else 0
def norm(w):
    op=w>>26
    if op in (2,3): return w&0xFC000000           # j/jal target
    if op in (0x0F,0x09,0x08,0x23,0x2B,0x21,0x25,0x20,0x24,0x29,0x28,0x31,0x39,0x35,0x3D,0x37,0x3F,0x27,0x0D,0x0C,0x0A,0x0B): return w&0xFFFF0000  # imm
    return w
lib=[]
for o in glob.glob(objdir+'/**/*.o',recursive=True):
    try: txt=subprocess.run(['llvm-objcopy','-O','binary','--only-section=.text',o,'/tmp/_t.bin'],capture_output=True)
    except: continue
    if not os.path.exists('/tmp/_t.bin'): continue
    data=open('/tmp/_t.bin','rb').read(); os.remove('/tmp/_t.bin')
    nm=subprocess.run(['llvm-nm','--defined-only','-n',o],capture_output=True,text=True).stdout.split('\n')
    fn=[(int(l.split()[0],16),l.split()[2]) for l in nm if len(l.split())==3 and l.split()[1] in 'Tt']
    for i,(a,n) in enumerate(fn):
        e=fn[i+1][0] if i+1<len(fn) else len(data)
        ws=[norm(x) for x in struct.unpack('>%dI'%((e-a)//4),data[a:a-(e-a)%4+e-((e-a)%4) if False else a+((e-a)//4)*4])]
        while ws and ws[-1]==0: ws.pop()
        if len(ws)>=4: lib.append((n,os.path.basename(o),ws))
for f in syms:
    if f['vram']<lo or not f['name'].startswith('func_'): continue
    r=f['vram']-0x8003AD80+0x1000
    ws=[norm(x) for x in struct.unpack('>%dI'%(f['size']//4),rom[r:r+f['size']//4*4])]
    while ws and ws[-1]==0: ws.pop()
    best=None
    for n,o,lw in lib:
        if abs(len(lw)-len(ws))>max(2,len(ws)//10): continue
        m=sum(1 for a,b in zip(ws,lw) if a==b)/max(len(ws),len(lw))
        if not best or m>best[0]: best=(m,n,o,len(lw))
    if best and best[0]>=0.6: print(f"{f['vram']:08X} {f['name']} size={len(ws)} -> {best[1]} ({best[2]}) score={best[0]:.2f}")
