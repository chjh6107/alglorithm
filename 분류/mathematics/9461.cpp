// 파도반 수열
#include <iostream>
using namespace std;

int main(){
    int t,n;
    long P[101]={1,1,1,2,2};
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=5;i<=n;i++) P[i]=P[i-1]+P[i-5];
        cout<<P[n-1]<<"\n";
    }
}