#크로아티아 알파벳
lib = ['c=','c-','dz=','d-','lj','nj','s=','z=']
alp=input()

for x in lib:
    alp=alp.replace(x,'*')
print(len(alp))