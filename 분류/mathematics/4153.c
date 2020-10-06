// 직각삼각형
#include <stdio.h>
#define MAX(a,b,c) a>b&&a>c?a:b>a&&b>c?b:c
#define SQ(a) a*a
int main(){
    int x,y,z;
    while(1){
        int max=0;
        scanf("%d%d%d",&x,&y,&z);
        if(!x&&!y&&!z) break;
        max= MAX(x,y,z);
        printf("%s\n",!(SQ(max)*2-(SQ(x)+SQ(y)+SQ(z)))?"right":"wrong");
    }
}