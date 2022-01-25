// 이친수
// 다이나믹 프로그래밍
#include <iostream>
using namespace std;
typedef long long ll;
ll dp[91]={0,1};
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    cout<<dp[n];
}