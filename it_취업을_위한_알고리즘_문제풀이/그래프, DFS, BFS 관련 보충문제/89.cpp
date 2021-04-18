// 89. 토마토(BFS 활용)
#include<iostream>
#include<queue>
#define MAX 1001
using namespace std;
int box[MAX][MAX];
int spend[MAX][MAX];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
queue<pair<int,int>>q;
void bfs(int m,int n,int &tomato, int &d){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(box[i][j]==1){
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        int y=q.front().first;
        int x=q.front().second;
        q.pop();
        d=spend[y][x];
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(box[ny][nx]==-1) continue;
            if(ny<0||nx<0||ny>=n||nx>=m) continue;
            if(!box[ny][nx]){
                box[ny][nx]=1;
                tomato--;
                spend[ny][nx]=spend[y][x]+1;
                q.push({ny,nx});
            }
        }
    }
}
int main(){
    freopen("input.txt","r",stdin);
    int M,N;
    int day=0,tomato=0;//덜익은친구들
    cin>>M>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>box[i][j];
            if(!box[i][j])tomato++;
        }
    }
    bfs(M,N,tomato,day);
    cout<<(tomato?-1:day);
}