// 오르막 수
// 다이나믹프로그래밍
#include <iostream>
int dp[1001],d[10]={1};
int main(){
    int N;
    std::cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=0;j<10;j++){
            d[j]+=(j?d[j-1]:0)%10007;
            dp[i]+=d[j];
        }
    }
    std::cout<<dp[N]%10007;
}