#덩치
p=[]
N = int(input())

for _ in range(N):
    x, y = map(int, input().split())
    p.append((x,y))

for i in p:
    rank=1
    for j in p:
        if i[0]<j[0] and i[1]<j[1]:
            rank+=1
    print(rank,end=' ')
print()