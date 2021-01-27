// 48. 각 행의 평균과 가장 가까운 값
#include <cstdio>
#include <cmath>

int main(){
    int a[9],max,distance;
    double avg;

    for(int i=0;i<9;i++){
        avg=0.0;
        max=-1;
        distance=100;
        for(int j=0;j<9;j++){
            scanf("%d",&a[j]);
            avg+=a[j];
        }
        avg=round(avg/9.0);
        for(int j=0;j<9;j++){
            if(distance>abs(avg-a[j])){
                distance=abs(avg-a[j]);
                max=a[j];
            }else if(distance==abs(avg-a[j]))
                max=a[j]>max?a[j]:max;
        }
        printf("%d %d\n",(int)avg,max);
    }
}