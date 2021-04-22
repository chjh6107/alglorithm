// 동적계획법이란? 네트워크 선 자르기(Bottom-Up)
#include<iostream>
int dp[46]={0,1,2};
int main(){
    for(int i=3;i<=45;i++)dp[i]=dp[i-1]+dp[i-2];
    int N;
    std::cin>>N;
    std::cout<<dp[N];
}