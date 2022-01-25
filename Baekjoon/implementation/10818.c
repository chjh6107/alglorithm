//최소, 최대
#include <stdio.h>
#include <stdlib.h>

void print_min(int *arr, int N){
    int min = arr[0];
    for(int i=1;i<N; i++)
        if(min > arr[i]) min = arr[i];
    
    printf("%d ", min);
}

void print_max(int *arr, int N){
    int max = arr[0];
    for(int i=1;i<N; i++)
        if(max < arr[i]) max = arr[i];
    
    printf("%d\n", max);
}

int main(){
    int N;
    scanf("%d",&N);
    int *arr = (int *)malloc(sizeof(int) * N);

    for(int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    print_min(arr,N);
    print_max(arr,N);
}