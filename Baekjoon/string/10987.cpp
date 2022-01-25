// 모음의 개수
// 구현, 문자열
#include <iostream>
using namespace std;
int main(){
    string s,ss="aiueo";
    int cnt=0;
    cin>>s;
    for(char c:s){
        for(char ch:ss){
            if(ch==c){
                cnt++;
                break;
            }            
        }
    }
    cout<<cnt;
}