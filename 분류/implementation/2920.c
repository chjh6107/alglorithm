// 음계
#include <stdio.h>

int main(){
    int n,stat=0;
    for(int i=0;i<8;i++){
        scanf("%d",&n);
        if(n == i+1) stat++;
        else if(n == 8-i) stat--;
        else stat = -1;
    }

    if(stat == 8) printf("ascending\n");
    else if(stat == -8) printf("descending\n");
    else printf("mixed");
}