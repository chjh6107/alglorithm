//보물
#include <stdio.h>
#define SWAP(a,b) {int t; t=a; a=b; b=t;}

int S(int *A, int *B, int N){
    int ret = 0;
    for(int i=0; i<N; i++) ret += A[i]*B[i];

    return ret;
}

void rearrange(int *arr, int N, int sel){
    for(int i=0; i < N-1; i++){
        for(int j=i+1; j < N; j++){
            if(sel == 1){
                if(arr[i]>arr[j])
                    SWAP(arr[i],arr[j]);
            }else if(sel == 0){
                if(arr[i]<arr[j])
                    SWAP(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int i, N, A[50], B[50];

    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%d",&A[i]);
    for(i=0;i<N;i++) scanf("%d",&B[i]);

    rearrange(A, N, 1);
    rearrange(B, N, 0);
    
    printf("%d\n",S(A,B,N));
}