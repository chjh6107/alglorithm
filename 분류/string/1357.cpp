// 뒤집힌 덧셈
//  구현, 문자열
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    s1 = to_string(stoi(s1)+stoi(s2));
    reverse(s1.begin(),s1.end());
    cout<<stoi(s1);
}