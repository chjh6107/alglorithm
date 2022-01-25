// 8진수 2진수
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int o=0,d=0,bit=1;
    string b;
    cin>>o;
    if(!o){
        cout<<0;
        return 0;
    }
    while(o){
        d+=(o%10)*bit;
        bit*=8;
        o/=10;
    }
    // cout<<d;
    while(d){
        b.push_back('0'+d%2);
        d/=2;
    }
    reverse(b.begin(),b.end());
    cout<<b;
}