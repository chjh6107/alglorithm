// 네트워크 선 자르기(Top-Down : 재귀, 메모이제이션)
#include<iostream>
int dp[46];
int dfs(int n){
    if(n==1||n==2)return dp[n]=n;
    if(dp[n]) return dp[n];
    return dp[n]=dfs(n-1)+dfs(n-2);
}
int main(){
    int N;
    std::cin>>N;
    dfs(N);
    std::cout<<dp[N];
}