// 하얀 칸
#include <stdio.h>

int main(){
    char str[8][8];
    int cnt=0;

    for(int i=0; i<8; i++) scanf("%s",str[i]);
    
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(i%2==0 && j%2==0 && str[i][j] =='F') cnt++;
            if(i%2==1 && j%2==1 && str[i][j] =='F') cnt++;
        }
    }
    printf("%d\n",cnt);
}