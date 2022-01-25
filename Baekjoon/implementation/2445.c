// 별찍기 - 8
#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i=0; i<N*2-1; i++){
        if((N*2-1)/2 >= i){
            for(int j=0;j<i+1;j++) printf("*");
            for(int j=0;j<N*2-(i+1)*2;j++) printf(" ");
            for(int j=0;j<i+1;j++) printf("*");
            printf("\n");
        }
        else{
            for(int j=0;j<N*2-1-i;j++) printf("*");
            for(int j=0;j<(i-N)*2+2;j++) printf(" ");
            for(int j=0;j<N*2-1-i;j++) printf("*");
            printf("\n");
        }
    }
}