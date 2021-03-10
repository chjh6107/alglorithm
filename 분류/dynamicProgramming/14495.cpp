// 피보나치 비스무리한 수열
// 다이나믹 프로그래밍
#include <iostream>
long long f[117]={0,1,1,1};
int main(){
    int n;
    std::cin>>n;
    for(int i=3;i<=n;i++)f[i]=f[i-1]+f[i-3];
    std::cout<<f[n];
}