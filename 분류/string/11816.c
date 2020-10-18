// 8진수, 10진수, 16진수
#include <stdio.h>
#include <string.h>
#define FOR(i,s,len) for(int i=s;i<len;i++)

int f(int n,int v){
    int mul=1;
    for(int i=0;i<n;i++) mul*=v;
    return mul;
}

int main(){

    char S[10];
    scanf("%s",S);
    int len=strlen(S), acc=0;
    if(S[0]!='0')
        FOR(i,0,len) printf("%c",S[i]);
    else if(S[0]=='0'&&S[1]=='x'){
        FOR(i,2,len) acc+= (S[i]- (('0'<=S[i]&&S[i]<='9') ?'0' :87))*f(len-i-1,16);
        printf("%d",acc);
    }else{
        FOR(i,1,len) acc+= (S[i]-'0')*f(len-i-1,8);
        printf("%d",acc);
    }
}