// 63. 인접행렬(가중치 방향그래프)
#include <iostream>
using namespace std;
int map[51][51];
int main(){
    int n,m,a,b,c;
    scanf("%d %d",&n,&m); //n:정점(Vertex), m:간선(Edge)
    for(int i=1;i<=m;i++){
        cin>>a>>b>>c;
        map[a][b]=c;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<map[i][j]<<" ";
        }
        cout<<"\n";
    }
}