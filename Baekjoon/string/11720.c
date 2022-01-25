//숫자의 합
#include <stdio.h>

int main(){
    int N, acc=0;
    scanf("%d",&N);
    char str[N];
    
    scanf("%s",str);
    for(int i=0; i<N;i++) acc+=(int)str[i]-48;
    printf("%d\n",acc);
}