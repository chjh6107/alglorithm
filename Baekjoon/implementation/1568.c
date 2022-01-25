// 새
#include <stdio.h>

int main(){
    int i,n,k=1;
    scanf("%d",&n);
    for(i=0;n!=0;i++){
        if(n<k)k=1;
        n-=k++;
    }
    printf("%d\n",i);
}