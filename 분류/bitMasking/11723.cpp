// 집합
// 비트마스킹
#include <cstdio>
#include <cmath>
#include <cstring>
int main(){
    int n,M,bit=0;
    char input[6]="";
    scanf("%d",&M);
    while(M--){
        scanf("%s",input);
        if(!strcmp(input,"all")){
            bit=0xFFFFF;
        }else if(!strcmp(input,"empty"))bit=0;
        else{
            scanf("%d",&n);
            n=pow(2,n-1);
            if(!strcmp(input,"add")){
                if(!(n&bit))bit|=n;
            }else if(!strcmp(input,"remove")){
                if(n&bit)bit^=n;
            }else if(!strcmp(input,"check")){
                printf("%d\n",n&bit?1:0);
            }else if(!strcmp(input,"toggle")){
                if(n&bit)bit^=n;
                else bit|=n;
            }
        }
    }
}