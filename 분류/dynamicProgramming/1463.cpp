// 1로 만들기
// 다이나믹 프로그래밍
#include <iostream>
int dp[1000001];
int main(){
    int n;
    std::cin>>n;
    for(int i=2;i<=n;i++){
        int min=2147000000;
        if(!(i%3))min=dp[i/3]+1<min?dp[i/3]+1:min;
        if(!(i%2))min=dp[i/2]+1<min?dp[i/2]+1:min;
        min=dp[i-1]+1<min?dp[i-1]+1:min;
        dp[i]=min;
    }
    std::cout<<dp[n];
}