// 1로 만들기
#include <stdio.h>

int main(){
    int x,count=0;
    scanf("%d",&x);
    while(x!=1){
        count++;
        if(x%3==0) x/=3;
        else if(x%3!=0)x-=1;
        else if(x%2==0) x/=2;
    }
    printf("%d",count);
}