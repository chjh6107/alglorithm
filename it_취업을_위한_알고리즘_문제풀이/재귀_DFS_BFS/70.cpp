// 70. 그래프 최단거리(BFS)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int> Q;
vector<int> map[21];
int ch[21],dist[21];

void bfs(){
    while(!Q.empty()){
        int v=Q.front();
        Q.pop();
        for(int i=0;i<map[v].size();i++){
            if(!ch[map[v][i]]){
                dist[map[v][i]]+=dist[v]+1;
                ch[map[v][i]]=1;
                Q.push(map[v][i]);

            }
        }
    }
}

int main(){
    int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        map[a].push_back(b);
    }
    Q.push(1);
    ch[1]=1;
    bfs();
    for(int i=2;i<=n;i++) printf("%d : %d\n",i,dist[i]);
}