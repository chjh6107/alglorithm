// https://algospot.com/judge/problem/read/FESTIVAL#
// 문제 확인 및 제출은 위 링크

#include <stdio.h>

double f(int lo, int hi, double *costArr){
    double min=99999999,cost=0;

    for(int i=lo;i<=hi;i++){
        for(int j=0;j<=hi-i;j++){
            for(int k=j;k<i+j;k++)
                cost+=costArr[k];
            cost/=i;
            min = cost<min?cost:min;
            cost=0;
        }
    }
    return min;
}

int main(){
    int C, N, L;
    double cost[1000]={0,};

    scanf("%d",&C);
    
    for(int i = 0; i < C; i++){
        scanf("%d %d",&N, &L);
        for(int j=0; j<N; j++){
            scanf("%lf",&cost[j]);
        }
        printf("%lf\n",f(L,N,cost));
    }
    return 0;
}
