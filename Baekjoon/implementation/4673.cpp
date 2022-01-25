// 셀프 넘버
#include <cstdio>

int d(int n){
    int num=n;
    while(n){
        num+=n%10;
        n/=10;
    }
    return num;
}

int main(){
    bool c[10001]={false};
    int chk;
    for(int i=1;i<=10000;i++){
        chk = d(i);
        if(chk<=10000) c[chk]=true;
    }
    for(int i=1;i<=10000;i++)
        if(!c[i])printf("%d\n",i);
}