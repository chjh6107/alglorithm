// 56. 재귀함수 분석
#include <iostream>

void f(int n){
    if(!n)return;
    f(n-1);
    std::cout<<n<<" ";

}
int main(){
    int n;
    std::cin>>n;
    f(n);
}