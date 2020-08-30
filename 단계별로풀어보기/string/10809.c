#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int idx[26];
    int count = -1;

    char *S= (char *)malloc(sizeof(char*)*100);
    scanf("%s",S);

    for(int i=0;i<26;i++) idx[i]=-1;

    for(int i=0;i<strlen(S);i++){
        count++;
        if(idx[S[i]-97] == -1)
            idx[S[i]-97] = count;
    }
    for(int i=0;i<26;i++) printf("%d ",idx[i]);
}