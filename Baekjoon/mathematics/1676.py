# 팩토리얼 0의 개수

def f(n):
    return n*f(n-1) if n>1 else 1
n=f(int(input()))
res=0
while n:
    if n%10:break
    else: res+=1
    n//=10
print(res)