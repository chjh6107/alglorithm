// 도전과제 : 돌다리 건너기(Bottom-Up)
#include<iostream>
int dp[46]={1,2};
int main(){
    int N;
    std::cin>>N;
    for(int i=2;i<=45;i++) dp[i]=dp[i-1]+dp[i-2];
    std::cout<<dp[N];
}