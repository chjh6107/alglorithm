// 최대 부분 증가수열
#include<iostream>
using namespace std;
int dp[1001]={0,1}; //첫번째는 자기자신인걸 생각해서 1로둠
int arr[1001];
int main(){
    int N,res=0;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
        int max=0;
        for(int j=1;j<=i;j++)
            if(arr[i]>arr[j]&&dp[j]>max)max=dp[j];
        if((dp[i]=++max)>res)res=dp[i];
    }
    cout<<res;
}