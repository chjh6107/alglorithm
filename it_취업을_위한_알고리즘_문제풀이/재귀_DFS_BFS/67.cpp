// 67. 최소비용(DFS : 인접행렬)
#include <iostream>
using namespace std;
int acc=0,cost=2000000000;
int map[21][21], check[21];
int V;
void dfs(int v){
    if(v==V){
        cost=acc<cost?acc:cost;
        return;
    }
    for(int i=1;i<=V;i++){
        if(map[v][i] && !check[i]){
            acc+=map[v][i];
            check[i]=1;
            dfs(i);
            acc-=map[v][i];
            check[i]=0;
        }
    }
}
int main(){
    int E,a,b,w;
    cin>>V>>E;
    for(int i=1;i<=E;i++){
        cin>>a>>b>>w;
        map[a][b]=w;
    }
    check[1]=1;
    dfs(1);
    cout<<cost;
}