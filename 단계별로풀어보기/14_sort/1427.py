#소드 인사이드

N = input()
N = list(map(int,sorted(N, reverse=True)))

for v in N:
    print(v,end='')
print()