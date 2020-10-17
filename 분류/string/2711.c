// 오타맨 고창영
#include <stdio.h>

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        char str[80];
        scanf("%d %s",&n,str);
        for(int i=0;str[i]!='\0';i++)
            if(i!=n-1) printf("%c",str[i]);
        printf("\n");
    }
}