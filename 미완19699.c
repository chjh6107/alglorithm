//소-난다!
#include <stdio.h>
#define SWAP(a,b) {int temp = a; a = b; b = temp;}

void sort(int *arr, int n){
    for(int i=0;i < n-1; i++){
        for(int j=i + 1; j < n; j++){
            if(arr[i]>arr[j])
                SWAP(arr[i],arr[j]);
        }
    }
}

int main(){
    int i, M, N, H[1000]={0,};

    scanf("%d%d",&N,&M);
    for(i = 0; i < N; i++) scanf("%d",&H[i]);
    sort(H,N);
    for(i = 0; i < N; i++) printf("%d ",H[i]);
    printf("\n");
}