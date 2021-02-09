// 단지번호붙이기
// 그래프 이론, 그래프 탐색, 너비 우선 탐색, 깊이 우선 탐색
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int map[27][27], visit[27][27];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int sum;
void dfs(int x,int y){
    visit[x][y]=1;
    sum++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(map[nx][ny]&&!visit[nx][ny]){
            dfs(nx,ny);
        }
    }
}
int main(){
    int n,cnt=0;;
    string s;
    vector<int> res;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        for(int j=1;j<=n;j++)
            map[i][j]=s[j-1]-'0';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(map[i][j]&&!visit[i][j]){
                sum=0;
                dfs(i,j);
                cnt++;
                res.push_back(sum);
            }
        }
    }
    sort(res.begin(),res.end());
    cout<<cnt<<"\n";
    for(int val:res)cout<<val<<"\n";
}