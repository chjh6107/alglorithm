// 랜선 자르기
// 이분 탐색, 매개 변수 탐색
#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll K,N,L=1,M,H=-1,cnt,res=0;
    cin>>K>>N;
    ll a[K];
    for(int i=0;i<K;i++){
        cin>>a[i];
        H=H<a[i]?a[i]:H;
    }
    while(L<=H){
        M=(L+H)/2;
        cnt=0;
        for(int i=0;i<K;i++) cnt+=a[i]/M;
        if(cnt<N) H=M-1;
        else {
            L=M+1;
            res=res<M?M:res;
        }
    }
    cout<<res;
}