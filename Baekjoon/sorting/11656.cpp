// 접미사 배열
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string str;
    vector<string> strVec;
    cin>>str;
    for(int i=0;str[i]!='\0';i++) 
        strVec.push_back(str.substr(i));
    sort(strVec.begin(),strVec.end());
    for(string s:strVec) cout<<s<<"\n";
}