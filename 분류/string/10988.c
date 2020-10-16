// 팰린드롬인지 확인하기
#include <stdio.h>
#include <string.h>

int f(char *S){
    int center=strlen(S)/2;
    char L[50]="\0",R[50]="\0";
    strncpy(L,S,center);
    strncpy(R,S+(strlen(S)%2?center+1:center),center);
    
    for(int i=0; i<center;i++)
        if(L[i]!=R[center-i-1]) return 0;
    
    return 1;
}

int main(){
    char str[100];
    scanf("%s",str);
    printf("%d",f(str));
}