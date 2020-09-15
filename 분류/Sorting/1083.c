// 소트
#include <stdio.h>
#define SWAP(a,b) {int t=a; a=b; b=t;}

int main(){
    int N, A[1000000],S;
    
    scanf("%d",&N);
    for(int i=0; i<N; i++) scanf("%d",&A[i]);
    scanf("%d",&S);

    for(int i=0; i<S*2; i+=2) SWAP(A[i],A[i+1]);
    for(int i=0; i<N; i++) printf("%d ",A[i]);
    printf("\n");
}