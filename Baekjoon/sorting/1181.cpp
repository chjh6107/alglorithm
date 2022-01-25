// 단어 정렬
#include<bits/stdc++.h>
using namespace std;
vector<string> str;
bool cmp(string a,string b){return a.size()==b.size()?a<b:a.size()<b.size();}
int main(){
    int n;
    string s,prev;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        str.push_back(s);
    }
    sort(str.begin(),str.end(),cmp);
    for(string s:str){
        if(prev==s)continue;
        cout<<s<<"\n";
        prev=s;
    }
}