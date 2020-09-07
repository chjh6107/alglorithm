//체스판 다시 칠하기
#include <stdio.h>

int main(){
    int N, M, i, j, count=0;
    char chess[50][50] = {'\0'};
    scanf("%d%d",&N,&M);

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf(" %c",&chess[i][j]);
        }
    }

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(i % 2 == 0){
                if(j % 2 == 0 && chess[i][j] != 'W' || j % 2 == 1 && chess[i][j] != 'B') count++;
            }
            else{
                if(j % 2 == 0 && chess[i][j] != 'B' || j % 2 == 1 && chess[i][j] != 'W') count++;
            }
        }
    }
    printf("%d\n",count);
}