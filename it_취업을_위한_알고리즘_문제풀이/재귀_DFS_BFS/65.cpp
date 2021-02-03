// 65. 미로탐색(DFS)
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> map(9, vector<int>(9,1));
vector<vector<int>> check(9,vector<int>(9));
int goX[]={1,0,-1,0}, goY[]={0,-1,0,1};
int cnt=0;

void dfs(int y, int x){
    // printf("%d %d cnt-%d\n",y,x,cnt);
    if(x==7&&y==7){
        cnt++;
        return;
    }
    for(int i=0;i<4;i++){
        if(!map[y+goY[i]][x+goX[i]] && !check[y+goY[i]][x+goX[i]]){
            check[y][x]=1;
            dfs(y+goY[i],x+goX[i]);
            check[y][x]=0;
        }
    }
}
int main(){
    for(int i=1;i<=7;i++)
        for(int j=1;j<=7;j++)
            cin>>map[i][j];
    dfs(1,1);
    cout<<cnt;
}