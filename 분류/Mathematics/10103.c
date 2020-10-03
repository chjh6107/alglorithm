// 주사위 게임
#include <stdio.h>
#define MAX(a,b) a>b?1:0
int main(){
    int n,A[2]={100,100},d[2],r;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d%d",&d[0],&d[1]);
        r=MAX(d[0],d[1]);
        if(d[0]!=d[1])A[r]-=d[!r];
    }
    printf("%d\n%d",A[0],A[1]);
}