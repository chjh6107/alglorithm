// 거스름돈
#include <stdio.h>

int main(){
    int n,count=0;
    int a[6]={500,100,50,10,5,1};
    scanf("%d",&n);
    n=1000-n;
    for(int i=0;i<6;i++){
        count+=n/a[i];
        n%=a[i];
    }
    printf("%d\n",count);
}