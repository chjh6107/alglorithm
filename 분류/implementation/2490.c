// 윷놀이
#include <stdio.h>

int main(){
    char mem[5]="DCBAE";
    for(int i=0;i<3;i++){
        int N,cnt=0;
        for(int j=0;j<4;j++){
            scanf("%d",&N);
            if(N) cnt++;
        }
        printf("%c\n",mem[cnt]);
    }
}