// Hashing
#include<bits/stdc++.h>
using namespace std;
const int M=1234567891;
int L;
int H(string a){
    long long hash=0,r=1;
    for(int i=0;i<L;i++){
        hash=(hash+(a[i]-'a'+1)*r)%M;
        r=(r*31)%M;
    }
    return hash;
}
int main(){
    string str;
    cin>>L;
    cin>>str;
    cout<<H(str);
}