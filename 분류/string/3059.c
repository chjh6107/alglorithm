// 등장하지 않는 문자의 합
#include <stdio.h>

int main(){
    int T;
    char S[1000];

    scanf("%d",&T);

    for(int j=0; j<T;j++){
        int res=0,alp[26]={0,};
        scanf("%s",S);
        for(int i=0; S[i]!='\0'; i++)
            if(!alp[S[i]-'A']) alp[S[i]-'A']=1;
        for(int i=0; i<26;i++)
            if(!alp[i]) res+=i+'A';
        printf("%d\n",res);
    }
}