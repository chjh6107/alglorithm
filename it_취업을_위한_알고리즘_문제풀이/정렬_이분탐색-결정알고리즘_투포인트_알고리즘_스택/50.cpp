// 50. 영지(territory) 선택 : (small)
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int H,W, max=0,tH, tW,acc;
    scanf("%d %d", &H, &W);
    vector<vector<int>> a(H, vector<int>(W));
    for(int i=0;i<H; i++)
        for(int j=0;j<W;j++)
            scanf("%d",&a[i][j]);
    
    scanf("%d %d",&tH, &tW);
    for(int i=0;i<H-tH+1;i++){
        for(int j=0;j<W-tW+1;j++){
            acc=0;
            for(int ti=i;ti<i+tH;ti++){
                for(int tj=j;tj<j+tW;tj++){
                    acc+=a[ti][tj];
                }
            }
            max=acc>max?acc:max;
        }
    }
    printf("%d",max);
}