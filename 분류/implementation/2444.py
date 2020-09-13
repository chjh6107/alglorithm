# 별 찍기 - 7
def printAnything(start, end, char):
    for _ in range(start,end):
        print(char, end='')

N = int(input())

for i in range(N):
    printAnything(i,N-1,' ')
    printAnything(0,i*2+1, '*')
    print()

for i in range(N-1):
    printAnything(0,i+1,' ')
    printAnything(0,(N-1-i)*2-1,'*')
    print()