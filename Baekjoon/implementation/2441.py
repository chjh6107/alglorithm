# 별 찍기 - 4
N = int(input())

for i in range(N):
    for _ in range(i):
        print(' ', end='')
    for _ in range(N-i, 0, -1):
        print('*',end='')
    print()