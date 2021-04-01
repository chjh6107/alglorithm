// 80. 다익스트라 알고리즘 pair버전
#include<iostream>
#include<vector>
#include<queue>
#define INF 214700000
using namespace std;
vector<pair<int, int>> graph[21];
vector<int> dist(21,INF);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; //first 거리, second 정점
void dijkstra(){
    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        int dist=pq.top().first;
        int vertx=pq.top().second;
    }
}
int main(){
    int N,M,a,b,c;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
    }
    dijkstra();
}