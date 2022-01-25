// 2차원 배열의 합
#include <stdio.h>

int main(){
    int n,m,k,a,b,x,y;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int acc=0;
        scanf("%d%d%d%d",&a,&b,&x,&y);
        for(int j=a-1;j<x;j++){
            for(int l=b-1;l<y;l++){
                acc += arr[j][l];
            }
        }
        printf("%d\n",acc);
    }
}