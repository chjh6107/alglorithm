// 회전하는 큐
// 자료 구조, 덱
#include <iostream>
#include <deque>
using namespace std;
deque<int> dq1,dq2;
int main(){
    int N,M,n,res=0;
    cin>>N>>M;
    for(int i=1;i<=N;i++)dq1.push_back(i);
    dq2=dq1;
    while(M--){
        int c1=0,c2=0;
        cin>>n;
        while(dq1.front()!=n){
            dq1.push_back(dq1.front());
            dq1.pop_front();
            c1++;
        }
        while(dq2.front()!=n){
            dq2.push_front(dq2.back());
            dq2.pop_back();
            c2++;
        }
        res+=c1<c2?c1:c2;
        c1<c2?dq1.pop_front():dq2.pop_front();
        c1<c2?dq2=dq1:dq1=dq2;
    }
    cout<<res;
}