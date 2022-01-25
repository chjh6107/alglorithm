// 나는야 포켓몬 마스터 이다솜 
// 자료구조, 문자열, 트리를 사용한 집합과 맵, 해시를 사용한 집합과 맵
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,M;
    string str;
    map<string, string> m;
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        cin>>str;
        m[to_string(i)]=str;
        m[str]=to_string(i);
    }
    while(M--){
        cin>>str;
        cout<<m[str]<<"\n";
    }
}