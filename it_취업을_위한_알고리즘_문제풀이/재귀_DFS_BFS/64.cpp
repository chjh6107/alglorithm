// 64. 경로 탐색(DFS)
#include <iostream>
using namespace std;

int V,E,cnt=0;
int map[21][21], check[21];
void dfs(int v){
    if(v==V){
        cnt++;
        return;
        }
    for(int i=1;i<=V;i++){
        if(map[v][i] && !check[i]){
            check[i]=1;
            dfs(i);
            check[i]=0;
        }
    }
}
int main(){
    int a,b,res;
    cin>>V>>E;
    for(int i=1;i<=E;i++){
        cin>>a>>b;
        map[a][b]=1;
    }
    check[1]=1;
    dfs(1);
    cout<<cnt;
}