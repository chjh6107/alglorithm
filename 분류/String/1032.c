// 명령 프롬프트
#include <stdio.h>
#include <string.h>

int main(){
    char str[50],res[50];
    int T;

    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%s",str);
        if(i==0) strcpy(res,str);
        else{
            for(int j=0; res[j]!='\0';j++){
                if(str[j] != res[j]) res[j] = '?';
            }
        }
    }
    printf("%s\n",res);
}