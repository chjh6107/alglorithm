// 쿠폰
#include <stdio.h>

int main(){
    int T;
    scanf("%d",&T);

    for(int i=0; i<T; i++){
        double cost;
        scanf("%lf",&cost);

        printf("$%.2lf\n", cost*0.8);
    }
}