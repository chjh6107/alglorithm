// 숫자 카드 게임
#include<iostream>
using namespace std;
int main(){
    int N,M,val,res=0,minVal;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        minVal=10001;
        for(int j=0;j<M;j++){
            cin>>val;
            minVal=min(val,minVal);
        }
        res=max(res,minVal);
    }
    cout<<res;
}