// 야바위 대장
#include <stdio.h>
#define SWAP(a,b) {char t=a; a=b; b=t;}
int main(){
    char S[100];
    int T,a,b;

    scanf("%s%d",S,&T);
    
    for(int i=0; i<T; i++){
        scanf("%d%d",&a,&b);
        SWAP(S[a],S[b]);
    }
    printf("%s\n",S);
}