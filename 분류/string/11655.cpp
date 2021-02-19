// ROT13
// 문자열
#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z') s[i]+=s[i]+13>'z'?-13:13;
        else if(s[i]>='A'&&s[i]<='Z') s[i]+=s[i]+13>'Z'?-13:13;
    }
    cout<<s;
}