// 숫자 카드 2
// 자료 구조, 이분 탐색, 해시를 사용한 집합과 맵
#include <cstdio>
#define MAX 10000000
int A[MAX*2+1];
int main(){
    int N,M,n;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&n);
        A[n+MAX]++;
    }
    scanf("%d",&M);
    while(M--){
        scanf("%d",&n);
        printf("%d ",A[n+MAX]);
    }
}