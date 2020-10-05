// 막대기
#include <stdio.h>

int main(){
    int x,stick=0;
    scanf("%d",&x);
    while(x){
        stick+=x%10&1;
        x=x>>1;
    }
    printf("%d\n",stick);
}