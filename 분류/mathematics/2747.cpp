// 피보나치 수
#include <iostream>
typedef long long ll;
ll dp[46]={0,1};
int main(){
    ll n;
    std::cin>>n;
    for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    std::cout<<dp[n];
}