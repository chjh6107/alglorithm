// 검증수
#include <stdio.h>

int main(){
    int n, acc=0;

    for(int i=0; i<5; i++){
        scanf("%d",&n);
        acc+=n*n;
    }
    printf("%d\n",acc%10);
}