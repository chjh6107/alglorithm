// 플러그
#include <stdio.h>

int main(){
    int n,num;
    scanf("%d",&n);
    int tot=-(n-1);
    while(n--){
        scanf("%d",&num);
        tot+=num;
    }
    printf("%d",tot);
}