// 1, 2, 3 더하기
// 다이나믹 프로그래밍
#include <iostream>
int dp[11]={0,1,2,4};
int main(){
    int T,n;
    for(int i=4;i<11;i++) dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    std::cin>>T;
    while(T--){
        std::cin>>n;
        std::cout<<dp[n]<<"\n";
    }
}