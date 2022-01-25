// RGB거리
// 다이나믹 프로그래밍
#include <cstdio>
#include<algorithm>
using namespace std;
int a[1001][3];
int main(){
    int n,cost;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&cost);
            if(!j) a[i][j]=min(a[i-1][1],a[i-1][2])+cost;
            else if(j==1) a[i][j]=min(a[i-1][0],a[i-1][2])+cost;
            else a[i][j]=min(a[i-1][0],a[i-1][1])+cost;
        }
    }
    printf("%d",min(a[n][0],min(a[n][1],a[n][2])));
}