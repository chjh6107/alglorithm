// 80. 다익스트라 알고리즘 pair버전
#include<iostream>
#include<vector>
#include<queue>
#define INF 214700000
using namespace std;
vector<pair<int, int>> graph[21];
vector<int> dist(21,INF);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; //first ->cost, second ->cur
void dijkstra(){
    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        int cost=pq.top().first;
        int cur=pq.top().second;
        pq.pop();
        if(dist[cur]<cost)continue;
        for(int i=0;i<graph[cur].size();i++){
            int next =graph[cur][i].first;
            int nCost=graph[cur][i].second+cost;
            if(dist[next]>nCost){
                dist[next]=nCost;
                pq.push({nCost,next});
            }
        }
    }
}
int main(){
    freopen("input.txt","r",stdin);
    int N,M,a,b,c;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
    }
    dijkstra();
    for(int i=2;i<=N;i++) cout<<N<<" : "<<(dist[i]==INF?"impossible":to_string(dist[i]))<<"\n";
}