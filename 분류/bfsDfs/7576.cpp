// 토마토
// 그래프 이론, 그래프 탐색, 너비 우선 탐색
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
struct Data{
    int a,b,d;
    Data(int a,int b,int d):a(a),b(b),d(d){};
};
vector<vector<int>> map(1002,vector<int>(1002,-1));
queue<Data> q;
int M,N;
int visit[1002][1002];
int goX[4]={1,0,-1,0},goY[4]={0,1,0,-1};
int cnt=0,day;
void bfs(){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(map[i][j]==1){
                q.push(Data(i,j,0));
                visit[i][j]=1;
            }
        }
    }
    while(!q.empty()){
        int y=q.front().a;
        int x=q.front().b;
        day=q.front().d;
        q.pop();
        for(int i=0;i<4;i++){
            if(!visit[y+goY[i]][x+goX[i]] && !map[y+goY[i]][x+goX[i]]){
                --cnt;
                visit[y+goY[i]][x+goX[i]]=1;
                q.push(Data(y+goY[i],x+goX[i],day+1));
            }
        }
    }
}
int main(){
    scanf("%d%d",&M,&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            scanf("%d",&map[i][j]);
            if(!map[i][j])cnt++;
        }
    }
    bfs();
    printf("%d",cnt?-1:day);
}