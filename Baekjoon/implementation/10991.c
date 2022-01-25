// 별 찍기 - 16
#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        for(int j=0; j<N-i; j++) printf(" ");
        for(int j=0; j<i*2-1; j++) printf("%c", j%2 ? ' ':'*');
        printf("\n");
    }
}