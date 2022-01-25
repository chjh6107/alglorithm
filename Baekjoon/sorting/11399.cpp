// ATM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N,res=0;
    cin>>N;
    vector<int> v(N+1);
    for(int i=1;i<=N;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<=N;i++){
        v[i]+=v[i-1];
        res+=v[i];
    }
    cout<<res;
}