// 유기농 배추
// 그래프 이론, 그래프 탐색, 너비 우선 탐색, 깊이 우선 탐색
#include <cstdio>
#include <vector>
using namespace std;
vector<vector<int>> v(52,vector<int>(52));
int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
void dfs(int y,int x){
    v[y][x]=0;
    for(int i=0;i<4;i++){
        int nextY=y+dy[i], nextX=x+dx[i];
        if(v[nextY][nextX])
            dfs(nextY,nextX);
    }
}
int main(){
    int T,M,N,K,cnt;
    scanf("%d",&T);
    while(T--){
        cnt=0;
        scanf("%d%d%d",&M,&N,&K);
        while(K--){
            int a,b;
            scanf("%d%d",&b,&a);
            v[a+1][b+1]=1;            
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                if(v[i][j]){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
}