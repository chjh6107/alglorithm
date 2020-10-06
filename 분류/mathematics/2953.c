// 나는 요리사다
#include <stdio.h>

int main(){
    int n,max=0,maxIdx;

    for(int i=0; i<5; i++){
        int acc=0;
        for(int j=0; j<4; j++){
            scanf("%d",&n);
            acc+=n;
        }
        if(max<acc){
            max = acc;
            maxIdx = i+1;
        }
    }
    printf("%d %d\n",maxIdx,max);
}