// 지능형 기차
#include <stdio.h>

int main(){
    int n, passenger=0,max=0;
    
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&n);
            if(j) passenger += n;
            else passenger -= n;
        }
        if(max<passenger) max=passenger;
    }
    printf("%d\n",max);
}