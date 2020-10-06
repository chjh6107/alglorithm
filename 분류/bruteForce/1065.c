// 한수
#include <stdio.h>

int main(){
    int n, count=0,val[3];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i<100)count++;
        else if(i<1000){
            val[0]=i/100%10;
            val[1]=i/10%10;
            val[2]=i%10;
            if(val[0]-val[1]==val[1]-val[2]) count++;
        }
    }
    printf("%d",count);
}