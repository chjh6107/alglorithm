// 아!
// 문자열, 애드 훅
#include <iostream>
int main(){
    std::string s1,s2;
    std::cin>>s1>>s2;
    std::cout<<(s1.length()>=s2.length()?"go":"no");
}