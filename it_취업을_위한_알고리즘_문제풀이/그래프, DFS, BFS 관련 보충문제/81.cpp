// 벨만 - 포드 알고리즘
#include<iostream>
#include<vector>
#include<queue>
#define INF 2147000000
using namespace std;
vector<pair<pair<int,int>,int>>edge;
vector<int> dist(101,INF);
int N,src;
bool bellmanFord(){
    dist[src]=0;
    for(int i=1;i<N;i++){
        for(int j=0;j<edge.size();j++){
            int s=edge[j].first.first;
            int e=edge[j].first.second;
            int cost=edge[j].second;
            if(dist[s]!=INF && dist[s]+cost<dist[e]) dist[e]=dist[s]+cost;
        }
    }
    for(int i=0;i<edge.size();i++){
        int u=edge[i].first.first;
        int v=edge[i].first.second;
        int w=edge[i].second;
        if(dist[u]!=INF && dist[u]+w<dist[v]){
            cout<<-1;
            return 0;
        }
    }
    return 1;
}
int main(){
    freopen("input.txt","r",stdin);
    int M,a,b,c,dst;
    cin>>N>>M;
    while(M--){
        cin>>a>>b>>c;
        edge.push_back({{a,b},c});
    }
    cin>>src>>dst;
    if(!bellmanFord()){
        cout<<-1;
        return 0;
    }
    cout<<dist[dst];
}