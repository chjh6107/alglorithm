// 최소비용 구하기
#include <iostream>
#include <vector>
#include <queue>
#define MAX 1001
#define INF 100000000
using namespace std;
vector<pair<int,int>> g[MAX];
priority_queue<pair<int,int>>pq;
void dijkstra(int x,vector<int> dist,int dst){
    dist[x]=0;
    pq.push({x,0});
    while(!pq.empty()){
        int now=pq.top().first;
        int nowDist=-pq.top().second;
        pq.pop();
        if(nowDist>dist[now])continue;
        for(int i=0;i<g[now].size();i++){
            int next=g[now][i].first;
            int nextDist=nowDist+g[now][i].second;
            
            if(dist[next]>nowDist){
                dist[next]=nextDist;
                pq.push({next,-nextDist});
            }
        }
    }
    cout<<dist[dst];
}
int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N,M,src,dst,a,b,c;
    cin>>N>>M;
    vector<int>dist(N+1,INF);
    for(int i=0;i<M;i++){
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    cin>>src>>dst;
    dijkstra(src,dist,dst);
}