// 알파벳 개수
#include <stdio.h>

int main(){
    int alp[26]={0,};
    char str[100];

    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++) alp[str[i]-97]++;
    for(int i=0; i<26; i++) printf("%d ",alp[i]);
}