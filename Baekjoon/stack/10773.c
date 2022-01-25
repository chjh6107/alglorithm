//제로
#include <stdio.h>

int main(){
    int Stack[100000], top=-1, K, val, acc=0;
    scanf("%d",&K);
    Stack[K];

    for(int i=0; i<K; i++){
        scanf("%d",&val);

        if(val != 0){
            Stack[++top] = val;
            acc += val;
        }else{
            acc -= Stack[top--];
        }
    }
    printf("%d\n",acc);
}