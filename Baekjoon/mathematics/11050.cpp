// 이항 계수 1
// 수학, 구현, 조합론
#include<iostream>
int f(int n){return n>1?n*f(n-1):1;}
int main(){
    int n,k;
    std::cin>>n>>k;
    std::cout<<f(n)/(f(k)*f(n-k));
}