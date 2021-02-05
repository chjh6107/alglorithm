// 72. 공주 구하기(큐 자료구조로 해결)
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> Q;
    int N,K,cnt=1,res;
    cin>>N>>K;
    for(int i=1;i<=N;i++) Q.push(i);
    while(!Q.empty()){
        if(cnt!=K){
            res = Q.front();
            Q.push(Q.front());
        }
        Q.pop();
        cnt++;
        if(cnt>K)cnt=1;
    }
    cout<<res;
}