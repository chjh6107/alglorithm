// 섬나라 아일랜드(BFS 활용)
#include<iostream>
#include<queue>
#define MAX 21
using namespace std;
int N, res=0;
int graph[MAX][MAX];
int visited[MAX][MAX];
queue<pair<int,int>>q;
int dx[]={1,0,-1,0,1,1,-1,-1},dy[]={0,1,0,-1,-1,1,1,-1};
void bfs(int y,int x){
    q.push({y,x});
    while(!q.empty()){
        int cy=q.front().first;
        int cx=q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            int ny=cy+dy[i];
            int nx=cx+dx[i];
            if(ny<1||nx<1||ny>N||nx>N)continue;
            if(graph[ny][nx]&&!visited[ny][nx]){
                visited[ny][nx]=1;
                q.push({ny,nx});
            }
        }
    }
    res++;
}
int main(){
    freopen("input.txt","r",stdin);
    cin>>N;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            cin>>graph[i][j];
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++)
            if(graph[i][j]&&!visited[i][j]) bfs(i,j);
    }
    cout<<res;
}