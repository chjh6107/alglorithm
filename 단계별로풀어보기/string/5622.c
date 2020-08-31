//다이얼
#include <stdio.h>

int func(char ch){
    if(ch>=65&&ch<=67)      return 3;
    else if(ch>=68&&ch<=70) return 4;
    else if(ch>=71&&ch<=73) return 5;
    else if(ch>=74&&ch<=76) return 6;
    else if(ch>=77&&ch<=79) return 7;
    else if(ch>=80&&ch<=83) return 8;
    else if(ch>=84&&ch<=86) return 9;
    else if(ch>=87&&ch<=90) return 10;
}

int main(){
    char str[15];
    int acc=0;
    scanf("%s",str);

    for(int i=0; str[i] != '\0'; i++) acc += func(str[i]);
    printf("%d\n",acc);
}