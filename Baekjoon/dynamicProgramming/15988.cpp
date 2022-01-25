// 1, 2, 3 더하기 3
// 다이나믹 프로그래밍
#include <iostream>
long long dp[1000001]={0,1,2,4};
int main(){
    int T,a;
    std::cin>>T;
    for(int i=4;i<=1000001;i++)dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%1000000009;
    while(T--){
        std::cin>>a;
        std::cout<<dp[a]<<'\n';
    }
}