# 별 찍기 - 3
N = int(input())

for i in range(N):
    for _ in range(N-i, 0, -1):
        print('*',end='')
    print()