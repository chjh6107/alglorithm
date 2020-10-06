// 이상한 곱셈
#include <stdio.h>
#include <string.h>
#define FOR(i,n) for(int i=0; i<n; i++)

int main(){
    long long int acc=0;
    char s1[10001], s2[10001];
    scanf("%s%s",s1,s2);

    FOR(i,strlen(s1))
        FOR(j,strlen(s2))
            acc += (s1[i]-'0')*(s2[j]-'0');
    printf("%lld\n",acc);
}