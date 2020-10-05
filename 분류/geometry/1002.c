// 터렛
#include <stdio.h>
#include <math.h>
#define POW(a) (a*a)
int main(){
    int T,x1,x2,y1,y2,r1,r2,dist;
    scanf("%d",&T);

    while(T--){
        scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
        dist = POW((x2-x1))+POW((y2-y1));
        
        if(r1==r2&&dist==0) printf("-1\n");
        else if(POW((r2-r1))<dist&&dist<POW(r1+r2)) printf("2\n");
        else if(POW((r2-r1))==dist||POW(r1+r2)==dist) printf("1\n");
        else printf("0\n");
    }
}