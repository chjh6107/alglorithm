// ACM 호텔
// 수학, 구현, 사칙연산
#include <cstdio>
int main(){
    int t,h,w,n,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&h,&w,&n);
        a=n%h;
        b=n/h+1;
        if(!a)a=h;
        if(!(n%h))b--;
        printf("%d\n",a*100+b);
    }
}