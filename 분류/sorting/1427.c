// 소트 인사이드
#include <stdio.h>
#include <string.h>
#define SWAP(a,b) {char t=a; a=b; b=t;}
int main(){
    char S[10]="\0";
    scanf("%s",S);
    int len = strlen(S);

    for(int i=0; i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(S[i]<S[j]){
                SWAP(S[i],S[j]);
            }
        }
    }
    printf("%s\n",S);
}