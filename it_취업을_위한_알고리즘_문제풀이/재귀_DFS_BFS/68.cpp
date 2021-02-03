// 68. 최소비용(DFS : 가중치 방향그래프 인접리스트)
#include <iostream>
#include <vector>
using namespace std;
int V,cost=2000000000;
vector<pair<int,int>> map[21]; //1st=넘어가는정점,2nd=가중치
int check[21];
void dfs(int v, int acc){
    if(v==V) {
        cost=acc<cost?acc:cost;
        return;
    }
    for(int i=0;i<map[v].size();i++){
        if(map[v][i].first && !check[map[v][i].first]){
            check[map[v][i].first]=1;
            dfs(map[v][i].first,acc+map[v][i].second);
            check[map[v][i].first]=0;
        }
    }
}
int main(){
    int E,a,b,w;
    cin>>V>>E;
    for(int i=1;i<=E;i++){
        cin>>a>>b>>w;
        map[a].push_back({b,w});
    }
    dfs(1,0);
    cout<<cost;
}