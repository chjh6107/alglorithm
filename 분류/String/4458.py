# 첫 글자를 대문자로
N = int(input())
for _ in range(N):
    S = input()
    print(S[0].title()+S[1:])