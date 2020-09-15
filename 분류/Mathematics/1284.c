// 집 주소
#include <stdio.h>

int main(){
    int N,tmp;

    while(1){
        int count=-1,cost=2;
        scanf("%d",&N);
        if(!N) break;

        while(N){
            tmp = N % 10;
            N/=10;
            switch(tmp){
                case 0:
                    cost+=4;
                    break;
                case 1:
                    cost+=2;
                    break;
                default:
                    cost+=3;
                    break;
            }
            count++;
        }
        cost += count;
        printf("%d\n",cost);
    }
}