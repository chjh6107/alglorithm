// 프린터 큐
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int *queue;
int front, rear;

void initQueue(void){
    queue = (int *)malloc(sizeof(int)*SIZE);
    front=0;
    rear=0;
}

void enQueue(int n){

    if(rear != SIZE-1) queue[rear++] = n;
    else{
        rear=0;
        queue[rear] = n;
    }
}

void changeQueue(void){
    if(front<rear){
        for(int i=front; i<rear-1; i++){
            for(int j=i+1; j<rear; j++){
                if(queue[i]<queue[j]){
                    enQueue(queue[i]);
                    front++;
                }
            }
        }
    }
}

void printQueue(void){
    for(int i=front; i<rear; i++)printf("%d ",queue[i]);
    printf("\n");
}

int main(){
    int T;
    scanf("%d",&T);

    for(int i=0; i<T; i++){
        int N,M;
        scanf("%d%d",&N,&M);
        initQueue();

        for(int j=0; j<N; j++){
            int n;
            scanf("%d",&n);
            enQueue(n);
        }
        changeQueue();
        printQueue();
        initQueue();
    }
}