//단어 공부
#include <stdio.h>

int main(){
    char buf[1000000]="";
    int alp[26]={0,}, max=0,maxIdx, overlap=0;

    scanf("%s",buf);
    for(int i=0; buf[i] != '\0'; i++){
        if(buf[i]>=65&&buf[i]<=90) alp[buf[i]-65]++;
        else alp[buf[i]-97]++;
    }
    for(int i=0; i<26; i++){
        if(max<alp[i]){
            max = alp[i];
            maxIdx = i;
        }
    }
    for(int i=0; i<26; i++)
        if(max == alp[i]) overlap++;
    if(overlap > 1) printf("?\n");
    else printf("%c\n",maxIdx+65);
}