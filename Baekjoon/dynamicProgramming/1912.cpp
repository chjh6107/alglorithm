// 연속합
#include<iostream>
using namespace std;
int dp[100001];
int arr[100001];
int main(){
    int n,max=-2147000000;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++){
        dp[i]=arr[i]<dp[i-1]+arr[i]?dp[i-1]+arr[i]:arr[i];
        if(dp[i]>max)max=dp[i];
    }
    cout<<max;
}