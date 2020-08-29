//평균은 넘겠지
//ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
#include <stdio.h>

int main(){
    int C, N;
    scanf("%d",&C);

    for(int i=0; i<C; i++){
        scanf("%d",&N);
        int arr[N], sum=0, count=0;
        double avg;

        for(int j=0; j<N; j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        avg = sum/N;
        for(int j=0; j<N; j++) 
            if(avg<arr[j]) count++;

        printf("%.3lf%%\n",(double)count/N*100);
    }
}