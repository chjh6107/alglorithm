//좌표 정렬하기
#include <stdio.h>
#define SWAP(a,b) {int temp = a; a = b; b = temp;}
int main(){
    int loc[100000][2]={{0,},};
    int x,y,N, minLoc;
    
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d%d",&x,&y);
        loc[i][0]=x;
        loc[i][1]=y;
    }

    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(loc[i][0]>=loc[j][0] && loc[i][1]>loc[j][1]){
                SWAP(loc[i][0],loc[j][0]);
                SWAP(loc[i][1],loc[j][1]);
            }
        }
    }
    for(int i=0; i<N; i++) printf("%d %d\n",loc[i][0],loc[i][1]);
}