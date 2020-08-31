#include <stdio.h>

int main(){
    int c=0,T,A,B;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        c++;
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d\n",c,A+B);
    }
}
