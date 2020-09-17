// 반올림
#include <stdio.h>
#define ROUND(n, val) n%val >= val*0.5 ? (int)(n/val) *val +val : (int)(n/val) *val
int main(){
    int N, val = 10;
    scanf("%d",&N);
    while(N>val){
        N = ROUND(N,val);
        val *= 10;
    }
    printf("%d\n",N);
}