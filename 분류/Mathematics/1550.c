// 16진수
#include <stdio.h>
#include <string.h>

int func(int n, int len){
    for(int i=0;i<len-1;i++){
        n*= 16;
    }
    return n;
}

int main(){
    char str[6];
    int tot=0;
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]>='0'&&str[i]<='9'){
            tot+=func(str[i]-'0',len-i);
        }else if(str[i]>='A'&&str[i]<='F'){
            tot+=func(str[i]-55,len-i);
        }
    }
    printf("%d\n",tot);
}