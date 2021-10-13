// 1이 될 때까지
#include<iostream>
using namespace std;
// int main(){
//     int N,K,res=0;
//     cin>>N>>K;
//     while(N>1){
//         N=N%K?N-1:N/K;
//         res++;
//     }
//     cout<<res;
// }

//최적화 코드
int main(){
    int N,K,res=0;
    cin>>N>>K;
    while(N>1){
        int tartget=(N/K)*K;
        res+=(N-tartget);
        res++;
        N/=K;
    }
    cout<<res;
}