// 2×n 타일링 2
// 다이나믹 프로그래밍
#include <iostream>
int dp[1001]={0,1};
int main(){
    int n;
    std::cin>>n;
    for(int i=2;i<=1000;i++)
        dp[i]=(dp[i-1]*2+(i%2?-1:1))%10007;
    std::cout<<dp[n];
}