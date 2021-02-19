// 비밀번호 찾기
// 자료 구조, 해시를 사용한 집합과 맵
#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N,M;
    map<string,string> m;
    string a,b;
    cin>>N>>M;
    while(N--){
        cin>>a>>b;
        m[a]=b;
    }
    while(M--){
        string s;
        cin>>s;
        cout<<m[s]<<"\n";
    }
}