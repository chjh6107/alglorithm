# 별 찍기 - 5

N = int(input())

for i in range(N):
    for _ in range(i,N-1):
        print(' ',end='')
    for _ in range(i*2+1):
        print('*',end='')
    print()