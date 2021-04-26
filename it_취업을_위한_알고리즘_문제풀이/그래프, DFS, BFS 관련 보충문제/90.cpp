#include<iostream>
#include<queue>
#define MAX 25
using namespace std;
int N,M;
int jungle[MAX][MAX];
int visited[MAX][MAX];
int size[MAX][MAX];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
queue<pair<int,int>> q;
void bfs(int &t){//심바위치
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if(M==1){
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx<0||ny<0||nx>=N||ny>=N) continue;
                if(!visited[ny][nx]){
                    visited[ny][nx]=1;
                    jungle[y][x]=0;
                    
                    jungle[ny][nx]=9;

                }
            }
        }else{

        }
        t++;
    }
}
int main(){
    freopen("input.txt","r",stdin);
    int time=0;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>jungle[i][j];
            if(jungle[i][j]==9){
                size[i][j]=2;
                visited[i][j]=1;
                q.push({i,j});
            }
            else if(jungle[i][j])M++;
        }
    }
    bfs(time);
    cout<<time;
}