// 숫자 게임
#include <stdio.h>

int func(int *a){
    int max=0,tmp;
        for(int j=0;j<3;j++){
            for(int k=j+1; k<4; k++){
                for(int l=k+1; l<5; l++){
                    tmp = (a[j]+a[k]+a[l])%10;
                    if(max<tmp) max = tmp;
                }
            }
        }
    return max;
}
int main(){
    int N, a[5], res, winner, max=0;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        for(int j=0; j<5; j++) scanf("%d",&a[j]);
        res = func(a);
        if(max<=res){
            max=res;
            winner=i+1;
        }
    }
    printf("%d\n",winner);
}