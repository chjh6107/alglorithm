//설탕 배달
#include <stdio.h>
int main(){
    int N, count=0;

    scanf("%d",&N);

    while(1){
        if(N % 5 == 0){
            count += N/5;
            printf("%d\n",count);
            break;
        }else if(N<0){
            printf("-1\n");
            break;
        }else{
            N -= 3;
            count++;
        }
    }
}