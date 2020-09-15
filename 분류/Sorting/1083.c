// 소트
#include <stdio.h>
#define SWAP(a,b) {int t=a; a=b; b=t;}

void bubble(int *A, int n, int s){
    int count=0;
    for(int i=0;i<n; i++){
        for(int j=0; j<n-1; j++){
            if(A[j]<A[j+1]){
                if(count == s) break;
                SWAP(A[j],A[j+1]);
                count++;
            }
        }
    }
}

int main(){
    int N, A[1000000],S;
    
    scanf("%d",&N);
    for(int i=0; i<N; i++) scanf("%d",&A[i]);
    scanf("%d",&S);

    bubble(A,N, S);
    for(int i=0; i<N; i++) printf("%d ",A[i]);
    printf("\n");
}