# 열 개씩 끊어 출력하기
N = input()

while len(N):
    print(N[:10])
    N = N[10:]