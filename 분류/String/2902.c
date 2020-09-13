// KMP는 왜 KMP일까?
#include <stdio.h>

int main(){
    char str[100];
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
        if(str[i]>=65 && str[i]<=90) printf("%c",str[i]);
    printf("\n");
}