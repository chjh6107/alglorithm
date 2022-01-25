// 별 찍기 - 12
#include <stdio.h>
#define PRINT(n,ch) for(int j=0; j<n; j++) printf("%c",ch)

int main(){
    int N;
    scanf("%d",&N);

    for(int i=0; i<N*2-1; i++){
        if(i<N){
            PRINT(N-i-1,' ');
            PRINT(i+1,'*');
        }else{
            PRINT(i-N+1,' ');
            PRINT(N*2-i-1,'*');
        }
        printf("\n");
    }
}