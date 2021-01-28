// 51. 영지(territory) 선택 : (large)
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int H,W, max=0,tH, tW, tmp;
    scanf("%d %d", &H, &W);
    vector<vector<int>> a(H+1, vector<int>(W+1));
    vector<vector<int>> dp(H+1, vector<int>(W+1));

    for(int i=1;i<=H; i++){
        for(int j=1;j<=W;j++){
            scanf("%d",&a[i][j]);
            dp[i][j]=dp[i-1][j]+dp[i][j-1]
                    -dp[i-1][j-1]+a[i][j];
        }
    }
    scanf("%d %d",&tH, &tW);
    for(int i=tH;i<=H; i++){
        for(int j=tW;j<=W;j++){
           tmp=dp[i][j]-dp[i-tH][j]-dp[i][j-tW]+dp[i-tH][j-tW];
           max=tmp>max?tmp:max;
        }
    }
    printf("%d",max);
}