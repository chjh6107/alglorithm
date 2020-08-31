//그룹 단어 체커
#include <stdio.h>

int main(){
    int N, counter=0, alpCnt[26]={0,};
    char str[100];
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++) alpCnt[str[i]-97]++;
    for(int i=0;i<26;i++)printf("%d ",alpCnt[i]);
    printf("\n");
}