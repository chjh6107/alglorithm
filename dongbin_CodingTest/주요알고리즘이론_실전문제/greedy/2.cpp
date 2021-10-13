// 큰 수의 법칙
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,K,res=0;
    int arr[1000]={};
    cin>>N>>M>>K;
    for(int i=0;i<N;i++)cin>>arr[i];
    sort(arr,arr+N);
    res+=arr[N-1]*(M-M%K); // M번에서 나머지값을 뺀 양은 첫번째 값
    res+=arr[N-2]*(M%K); //나머지는 두번째 값
    cout<<res;
}