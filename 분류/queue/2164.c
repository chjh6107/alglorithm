// 카드2
#include <stdio.h>

int A[999999],front=0, rear;
int main(){
    int n;
    scanf("%d",&n);
    rear = n;
    for(int i=0;i<n;i++) A[i]=i+1;

    while(front!=rear-1){
        front++;
        A[rear++]=A[front++];
    }
    printf("%d",A[front]);
}