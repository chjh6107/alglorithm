// 2진수 8진수
// 수학, 문자열, 사칙연산
#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
stack<int> st;
int main(){
    int bin=0,res=0,oct=0;
    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        oct+=(s[i]-'0')*pow(2,bin);
        bin++;
        if(bin==3||!i){
            bin=0;
            st.push(oct);
            oct=0;
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}