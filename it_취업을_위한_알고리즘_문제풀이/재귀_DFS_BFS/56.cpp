// 56. 재귀함수 분석
#include <iostream>

void f(int n, int m){
    if(n<m)return;
    std::cout<<m<<" ";
    f(n,m+1);
}
int main(){
    int n;
    std::cin>>n;
    f(n,1);
}