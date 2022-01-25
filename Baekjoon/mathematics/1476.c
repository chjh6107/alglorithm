// 날짜 계산
#include <stdio.h>

int main(){
    int E,S,M;
    scanf("%d%d%d",&E,&S,&M);
    for(int i=1,j=1,k=1,count=1;;i++,j++,k++,count++){
        if(!(i%16))i=1;
        if(!(j%29))j=1;
        if(!(k%20))k=1;
        if(E==i&&S==j&&M==k){
            printf("%d\n",count);
            break;
        }
    }
}