// 멀티태스킹(카카오 먹방 문제 변형)
#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
int main(){
    int val,n,k,cur=-1,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        a.push_back(val);
    }
    cin>>k;

    while(1){
        cur++;
        if(cur==n)cur=0;
        if(!a[cur]) continue;
        a[cur]--;

        if(!--k)break;
    }
    for(int i=0;!flag && i<n;i++)
        if(a[i]) flag=1;
    cout<<(flag?cur+1:-1);
}