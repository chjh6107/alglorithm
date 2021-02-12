// 다리 놓기
// 수학, 다이나믹 프로그래밍, 조합론
#include <cstdio>
int dp[30][30];
int main(){
    int T,N,M;
    scanf("%d",&T);
    for(int i=1;i<30;i++){
        dp[i][i]=1;
        dp[1][i]=i;
    }
    for(int i=2;i<30;i++)
        for(int j=i+1;j<30;j++)
            dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
    while(T--){
        scanf("%d %d",&N,&M);
        printf("%d\n",dp[N][M]);
    }
}