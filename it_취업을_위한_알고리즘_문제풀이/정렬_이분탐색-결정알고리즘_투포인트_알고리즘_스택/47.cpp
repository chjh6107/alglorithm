// 47. 봉우리
#include <cstdio>
#include <vector>
using namespace std;
int x[]={-1,0,1,0};
int y[]={0,1,0,-1};
int main(){
    int n, cnt=0,flag;
    scanf("%d",&n);
    vector<vector<int> > map(n+2,vector<int>(n+2)); 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            scanf("%d",&map[i][j]);
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            flag=0;
            for(int k=0;k<4;k++){
                if(map[i][j]<=map[i+x[k]][j+y[k]]){
                    flag=1;
                    break;
                }
            }
            if(!flag)cnt++;
        }
    }
    printf("%d",cnt);
}