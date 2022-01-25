//평균
#include <stdio.h>

int main(){
    int N, M=-1;
    double arr[1000]={0.0,}, res;

    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%lf",&arr[i]);
        if(arr[i]>M) M=arr[i];
    }
    
    for(int i=0; i<N; i++){
        arr[i] = arr[i]/M*100;
        res += arr[i];
    }
    res /= N;
    printf("%lf",res);
}