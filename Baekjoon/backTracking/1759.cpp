// 암호 만들기
// 수학, 브루트포스 알고리즘, 조합론, 백트래킹
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int L,C,flag;
vector<char> v;
int visit[16];
string vowels="aeiou";
void D(int len,int start,int cons, int vowel){
    flag=0;
    if(len==L){
        if(cons<2||vowel<1)return;
        for(int i=0;i<C;i++)
            if(visit[i])
                cout<<v[i];
        cout<<"\n";
        return;
    }
    for(int i=start;i<C;i++){
        if(!visit[i]){
            visit[i]=1;
            for(char vw:vowels){
                if(vw==v[i]){
                    flag=1;
                    break;
                }
            }
            if(flag)D(len+1,i+1,cons,vowel+1);
            else D(len+1,i+1,cons+1,vowel);
            visit[i]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cout.tie(NULL);
    char ch;
    cin>>L>>C;
    for(int i=0;i<C;i++){
        cin>>ch;
        v.push_back(ch);
    }
    sort(v.begin(),v.end());
    D(0,0,0,0);
}