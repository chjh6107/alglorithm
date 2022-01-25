# 별 찍기 - 6
def printAnything(start, end, char):
    for _ in range(start,end):
        print(char, end='')

N = int(input())

for i in range(N):
    printAnything(0,i,' ')
    printAnything(0,(N-i)*2-1,'*')
    print()