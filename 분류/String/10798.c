// 세로읽기
#include <stdio.h>
#include <string.h>

int main(){
    char str[5][15]={'\0'};
    int maxLen=0;
    for(int i=0; i<5; i++){
        scanf("%s",str[i]);
        if(strlen(str[i])>maxLen) maxLen=strlen(str[i]);
    }

    for(int j=0; j<maxLen; j++)
        for(int i=0; i<5; i++){
            if(str[i][j] == NULL) continue;
            else printf("%c",str[i][j]);
        }
    printf("\n");
}