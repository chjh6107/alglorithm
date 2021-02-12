// 방 번호
// 구현
#include <iostream>
int main(){
    int n,res=-1, a[9]={0,};
    std::cin>>n;
    if(!n){
        std::cout<<1;
        exit(0);
    }
    while(n){
        if(n%10==6||n%10==9)a[6]++;
        else a[n%10]++;
        n/=10;
    }
    a[6]=((double)a[6]/2.0)+0.5;
    for(int i=0;i<9;i++) res=a[i]>res?a[i]:res;
    std::cout<<res;
}