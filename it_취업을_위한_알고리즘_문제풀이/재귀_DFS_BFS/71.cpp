// 71. 송아지 찾기(BFS : 상태트리탐색)
#include <iostream>
#include <queue>
using namespace std;
int S,E;
int mv[3]={1,-1,5};
int dist[10001],ch[10001];
queue<int> Q;
void bfs(){
    while(!Q.empty()){
        int pos;
        int curr = Q.front();
        Q.pop();
        if(curr==E) break;
        for(int i=0;i<3;i++){
            pos = curr+mv[i];
            if(pos<0||pos>10000) continue;
            if(!ch[pos]){
                ch[pos]=1;
                Q.push(mv[i]+curr);
                dist[pos]+=dist[curr]+1;
            }
        }
    }
}
int main(){
    cin>>S>>E;
    Q.push(S);
    bfs();
    cout<<dist[E];
}