// 바이러스
// 그래프 이론, 그래프 탐색, 너비 우선 탐색, 깊이 우선 탐색
#include <iostream>
#include <vector>
using namespace std;
vector<int> v[101];
int visit[101];
int cnt=0;
void dfs(int V){
    visit[V]=1;
    for(int i=0;i<v[V].size();i++){
        if(!visit[v[V][i]]){
            cnt++;
            dfs(v[V][i]);
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout<<cnt;
}