// 요세푸스 문제 0
// 자료 구조, 큐
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int> q;
vector<int> v;
int main(){
    int N,K,cnt=0;
    cin>>N>>K;
    for(int i=1;i<=N;i++)q.push(i);
    while(!q.empty()){
        cnt++;
        if(cnt==K){
            v.push_back(q.front());
            cnt=0;
        }
        else q.push(q.front());
        q.pop();
    }
    cout<<'<';
    for(int i=0;i<N;i++) cout<<v[i]<<(i<N-1?", ":"");
    cout<<'>';
}