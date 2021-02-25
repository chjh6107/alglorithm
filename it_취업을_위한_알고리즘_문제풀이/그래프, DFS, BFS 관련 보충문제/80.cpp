// 80. 다익스트라 알고리즘
#include <iostream>
#include <vector>
#include <queue>
#define INF 2147000000
using namespace std;
struct Edge{
    int vex; //정점
    int dis; //정점 비용
    Edge(int a,int b):vex(a),dis(b){};
    bool operator<(const Edge &e)const{
        return dis>e.dis; //내림차순 정렬 (greater,minimum)
    }
};
vector<pair<int,int>> graph[21];
vector<int> dist(21,INF);
priority_queue<Edge>pq;
void dijkstra(int start){
    pq.push(Edge(start,0));
    dist[start]=0;
    while(!pq.empty()){
        int now=pq.top().vex;
        int cost=pq.top().dis;
        pq.pop();
        if(cost>dist[now])continue;
        for(int i=0;i<graph[now].size();i++){
            int next=graph[now][i].first;
            int nextDis=cost+graph[now][i].second;
            if(dist[next]>nextDis){
                dist[next]=nextDis;
                pq.push(Edge(next,nextDis));
            }
        }
    }
}
int main(){
    int n,m,a,b,c;
    cin>>n>>m;

    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
    }
    dijkstra(1);
    for(int i=2;i<=n;i++){
        if(dist[i]!=INF)cout<<i<<" : "<<dist[i]<<"\n";
        else cout<<i<<" : impossible"<<"\n";
    }
}