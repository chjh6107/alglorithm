// 카이사르 암호
#include <stdio.h>

int main(){
    char str[1000];
    scanf("%s",str);

    for(int i=0; str[i] != '\0'; i++){
        if(str[i]<'D') printf("%c",str[i]+23);
        else  printf("%c",str[i]-3);
    }
    printf("\n");
}