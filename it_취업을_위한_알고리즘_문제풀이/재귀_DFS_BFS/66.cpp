// 66. 경로 탐색(DFS : 인접리스트 방법)
#include <iostream>
#include <vector>
using namespace std;
int V,E,cnt=0;
vector<int> map[21];
int check[21];
void dfs(int v){
    if(v==V){
        cnt++;
        return;
    }
    for(int i=0;i<map[v].size();i++){
        if(!check[map[v][i]]){
            check[map[v][i]]=1;
            dfs(map[v][i]);
            check[map[v][i]]=0;
        }
    }
}
int main(){
    int a,b;

    cin>>V>>E;
    for(int i=1;i<=E;i++){
        cin>>a>>b;
        map[a].push_back(b);
    }
    check[1]=1;
    dfs(1);
    cout<<cnt;
}