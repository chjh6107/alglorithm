//숫자 counting sort
#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B,C;
    int numArr[10]={0,};
    char *str = malloc(sizeof(char) * 7);

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    sprintf(str,"%d", A*B*C);

    for(int i=0; str[i] != '\0'; i++)   numArr[str[i]-48]++;
    for(int i=0; i<10;i++)              printf("%d\n",numArr[i]);
}