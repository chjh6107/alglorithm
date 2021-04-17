// 미로의 최단거리 통로(BFS 활용)
#include<iostream>
#include<queue>
using namespace std;
int graph[7][7];
int dist[7][7];
queue<pair<int,int>> q;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
void bfs(){
    int cnt=0;
    q.push({0,0});
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=dx[i]+x;
            int ny=dy[i]+y;
            if(nx<0||nx>6||ny<0||ny>6)continue;
            if(!graph[ny][nx]){
                graph[y][x]=1;
                dist[ny][nx]=dist[y][x]+1;
                q.push({nx,ny});
            }
        }
    }
}
int main(){
    // freopen("input.txt","r",stdin);
    for(int i=0;i<7;i++)
        for(int j=0;j<7;j++)
            cin>>graph[i][j];
    bfs();
    cout<<dist[6][6];
}