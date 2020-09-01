//손익분기점
#include <stdio.h>

int main(){
    int A,B,C,X=1;
    scanf("%d%d%d",&A,&B,&C);
    
    if(B >= C) {
        printf("-1\n");
        return 0;
    }else{
        X = A/(C - B) + 1;
        printf("%d\n", X);
    }
}