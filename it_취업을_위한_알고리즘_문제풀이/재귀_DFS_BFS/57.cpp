// 57. 재귀함수 이진수 출력
#include <iostream>

void f(int n){
    if(!n)return;
    f(n/2);
    std::cout<<n%2;
}
int main(){
    int n;
    std::cin>>n;
    f(n);
}