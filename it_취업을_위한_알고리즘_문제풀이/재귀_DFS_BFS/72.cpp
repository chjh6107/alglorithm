// 72. 공주 구하기(큐 자료구조로 해결)
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> Q;
    int N,K;
    cin>>N>>K;
    for(int i=1;i<=N;i++) Q.push(i);
    while(!Q.empty()){
        for(int i=1;i<K;i++){
            Q.push(Q.front());
            Q.pop();
        }
        Q.pop();
        if(Q.size()==1)cout<<Q.front();
    }
}