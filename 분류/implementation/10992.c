// 별 찍기 - 17
#include <stdio.h>
#define PRINT(n,ch) for(int j=0; j<n; j++) printf("%c",ch)
#define NEWLINE printf("\n")

int main(){
    int N;
    scanf("%d",&N);

    for(int i=0; i<N-1; i++){
        PRINT(N-i-1,' ');
        PRINT(1,'*');
        
        if(i){
            PRINT(2*i-1,' ');
            PRINT(1,'*');
        }
        NEWLINE;
    }
    PRINT(2*N-1,'*');
    NEWLINE;
}