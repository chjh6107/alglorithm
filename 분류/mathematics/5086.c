// 배수와 약수
#include <stdio.h>

int main(){
    int n,m;
    while(1){
        scanf("%d%d",&n,&m);
        if(!n&&!m)break;
        if(n<m) printf("%s\n", !(m%n)?"factor":"neither");
        else printf("%s\n", !(n%m)?"multiple":"neither");
    }
}