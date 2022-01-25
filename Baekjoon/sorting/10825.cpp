// 국영수
// 정렬
#include <bits/stdc++.h>
using namespace std;
struct dat{
    string name;
    int kor,eng,mat;
    dat(string name,int kor,int eng,int mat)
        :name(name),kor(kor),eng(eng),mat(mat){};
};
bool comp(dat d1, dat d2){
    if(d1.kor==d2.kor && d1.eng==d2.eng && d1.mat==d2.mat) return d1.name<d2.name;
    if(d1.kor==d2.kor && d1.eng==d2.eng)return d1.mat>d2.mat;
    if(d1.kor==d2.kor)return d1.eng<d2.eng;
    return d1.kor>d2.kor;
}
int main(){
    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vector<dat> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        int a,b,c;
        cin>>str>>a>>b>>c;
        v.push_back(dat(str,a,b,c));
    }
    sort(v.begin(),v.end(),comp);
    for(dat d:v)cout<<d.name<<"\n";
}