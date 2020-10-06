// 홀수
#include <stdio.h>

int main(){
    int N, acc=0, min=100;

    for(int i=0; i<7; i++){
        scanf("%d",&N);
        if(N%2 == 1){
            acc+=N;
            if(min>N) min=N;
        }
    }
    if(!acc) printf("-1\n");
    else printf("%d\n%d\n",acc,min);
}