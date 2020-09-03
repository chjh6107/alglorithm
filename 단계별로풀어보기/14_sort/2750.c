#include <stdio.h>

void quicksort(int A[], int p, int r);
int partition(int A[], int p, int r);

int main(void){
    int A[1000];
    int i, N;
    scanf("%d",&N);
    for(i = 0; i < N; i++) scanf("%d",&A[i]);

    quicksort(A, 0, N-1);
    for(i = 0; i < N; i++) printf("%d\n", A[i]);
}

void quicksort(int A[], int p, int r){
    int q;
    
    if (p < r){
        q = partition(A, p, r);

        quicksort(A, p, q-1);
        quicksort(A, q+1, r);
    }
}

int partition(int A[], int p, int r){
    int x;
    int i, j, tmp;

    x = A[r];
    i = p -1;

    for (j = p; j <= r - 1; j++){
        if(A[j] <= x){
            i++;
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    tmp = A[i+1];
    A[i+1] = A[j];
    A[j] = tmp;

    return i+1;
}