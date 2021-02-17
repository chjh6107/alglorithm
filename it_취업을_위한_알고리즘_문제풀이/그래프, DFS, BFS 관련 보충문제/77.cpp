// 77. 친구인가? (Union&Find 자료구조)
#include <iostream>
using namespace std;
int unf[1001]; //원소는 학생번호
int Find(int v){
    return  v==unf[v]?v:unf[v]=Find(unf[v]); //경로압축
}
void Union(int a, int b){
    a=Find(a);
    b=Find(b);
    if(a!=b)unf[a]=b; //서로 다르면 union하여 합침
}
int main(){
    int N,M,a,b;
    cin>>N>>M;
    for(int i=1;i<=N;i++) unf[i]=i;
    for(int i=1;i<=M;i++){
        cin>>a>>b;
        Union(a,b);
    }
    cin>>a>>b;
    a=Find(a);
    b=Find(b);
    cout<<(a==b?"YES":"NO");
}