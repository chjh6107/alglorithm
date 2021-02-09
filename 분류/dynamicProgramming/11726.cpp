// 2×n 타일링
#include <iostream>
int dp[1001]={0,1,2};
int main(){
    int n;
    std::cin>>n;
    for(int i=3;i<=n;i++)dp[i]=(dp[i-1]+dp[i-2])%10007;
    std::cout<<dp[n];
}