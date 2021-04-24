// 한수
// 브루트포스
#include<iostream>
int main(){
    int n,cnt=99;
    std::cin>>n;
    if(n<100)cnt=n;
    for(int i=100;i<=n;i++){
        int L=i/100;
        int M=i/10%10;
        int R=i%10;
        if(L+R==M*2)cnt++;
    }
    std::cout<<cnt;
}