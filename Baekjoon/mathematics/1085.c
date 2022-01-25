// 직사각형에서 탈출
#include <stdio.h>

int main(){
    int x,y,w,h,min=1001;
    scanf("%d%d%d%d",&x,&y,&w,&h);

    if(min>x) min=x;
    if(min>y) min=y;
    if(min>w-x)min=w-x;
    if(min>h-y)min=h-y;

    printf("%d\n",min);
}