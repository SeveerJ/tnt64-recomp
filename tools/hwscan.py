import re,sys,glob,tomllib
syms=tomllib.load(open(sys.argv[1],'rb'))['section'][0]['functions']
fs=sorted((f['vram'],f['vram']+f['size'],f['name']) for f in syms)
import bisect
starts=[f[0] for f in fs]
hits={}
for p in glob.glob(sys.argv[2]+'/**/*.s',recursive=True):
    for line in open(p):
        m=re.match(r'\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(cache|mtc0|mfc0|eret|tlbwi|tlbp|tlbr|tlbwr|sync|ctc0)\b',line)
        if m:
            a=int(m.group(1),16); i=bisect.bisect_right(starts,a)-1
            if i>=0 and fs[i][0]<=a<fs[i][1]: hits.setdefault(fs[i],set()).add(m.group(2))
for f,ins in sorted(hits.items()): print(hex(f[0]),f[2],hex(f[1]-f[0]),sorted(ins))
