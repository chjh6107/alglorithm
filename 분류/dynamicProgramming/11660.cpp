// 구간 합 구하기 5
#include <cstdio>
int dp[1025][1025];
int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++){
            scanf("%d",&dp[i][j]);
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    while(M--){
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        printf("%d\n",dp[x2][y2]-dp[x2][y1-1]-dp[x1-1][y2]+dp[x1-1][y1-1]);
    }
}