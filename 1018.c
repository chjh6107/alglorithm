// 체스판 다시 칠하기
#include <stdio.h>

int main(){
    char board[50][50]={""};
    int n,m;
    scanf("%d%d",&n,&m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&board[i][j]);
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            printf("%c ",board[i][j]);
        }
        printf("\n");
        }
}