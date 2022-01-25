// 정수 삼각형
#include <cstdio>
#include <algorithm>
using std::max;
int dp[501][501];
int main(){
    int n,res=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            scanf("%d",&dp[i][j]);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j]);
            res=max(dp[i][j],res);
        }
    }
    printf("%d",res);
}