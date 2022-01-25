#나이순 정렬

mem=[]
N = int(input())

for _ in range(N):
    v, k = map(str,input().split())
    v=int(v)
    mem.append((v,k))
mem.sort(key=lambda mem: mem[0])

for m in mem:
    print(m[0],m[1])