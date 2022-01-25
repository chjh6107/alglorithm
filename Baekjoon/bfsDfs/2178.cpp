// 미로 탐색
// 그래프 이론, 그래프 탐색, BFS
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
queue<pair<int ,int>> Q;
vector<vector<int>> map(102,vector<int>(102));
int visit[102][102];
int goX[4]={1,0,-1,0}, goY[4]={0,-1,0,1};
int N,M;
void BFS(){
    while(!Q.empty()){
        int y=Q.front().first;
        int x=Q.front().second;
        Q.pop();
        if(x==M&&y==N) return;
        for(int i=0;i<4;i++){
            if(map[y+goY[i]][x+goX[i]] && !visit[y+goY[i]][x+goX[i]]){
                visit[y+goY[i]][x+goX[i]]+=visit[y][x]+1;
                Q.push({y+goY[i],x+goX[i]});
            }
        }
    }
}
int main(){
    string a;
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        cin>>a;
        for(int j=1;j<=M;j++)
            map[i][j]=a[j-1]-'0';
    }
    Q.push({1,1});
    visit[1][1]=1;
    BFS();
    cout<<visit[N][M];
}