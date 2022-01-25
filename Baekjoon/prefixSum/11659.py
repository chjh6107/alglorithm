# 구간 합 구하기 4

import sys
N,M = map(int, sys.stdin.readline().split())
arr=list(map(int, sys.stdin.readline().split()))
prefixSum=[0 for _ in range(N+1)]
for i in range(1,N+1):
    prefixSum[i]=arr[i-1]+prefixSum[i-1]
while M:
    i,j=map(int, sys.stdin.readline().split())
    print(prefixSum[j]-prefixSum[i-1])
    M-=1