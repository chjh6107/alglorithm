// 분산처리
#include <stdio.h>

int main(){
    int t,a,b,sqNum;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int mul=1;
        scanf("%d%d",&a,&b);
        sqNum = b%4;
        if(!sqNum) sqNum=4;
        for(int j=0;j<sqNum;j++) mul*=a;
        printf("%d\n",mul%10 ? mul%10 : 10);
    }
}