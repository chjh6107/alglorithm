//상수
#include <stdio.h>
int reverse_int(int n){
    int ret=0;
    for(;n!=0;){
        ret = (n%10)+(ret*10);
        n/=10;
    }
    return ret;
}

int main(){
    int a,b,max;
    char tmp[3];
    scanf("%d%d",&a,&b);
    a = reverse_int(a);
    b = reverse_int(b);
    if(a>b) printf("%d\n",a);
    else printf("%d\n",b);
}