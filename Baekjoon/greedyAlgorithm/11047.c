// 동전 0
#include <stdio.h>

int main(){
    int N,K,A[10],cost=0;
    scanf("%d%d",&N,&K);
    for(int i=N-1;i>=0;i--) scanf("%d",&A[i]);
    
    for(int i=0; i<N;i++) {
        cost+=K/A[i];
        K%=A[i];
    }
    printf("%d\n",cost);
}