// 백대열
// 수학, 문자열, 정수론, 파싱, 유클리드 호제법
#include <iostream>
using namespace std;
int main(){
    string s;
    int cut=0,a,b;
    cin>>s;
    for(int i=0;s[i]!=':';i++) cut++;
    a=stoi(s.substr(0,cut));
    b=stoi(s.substr(cut+1));
    for(int i=min(a,b);i>=1;i--)
        if(!(a%i)&&!(b%i)){
            cout<<a/i<<":"<<b/i;
            break;
        }
}