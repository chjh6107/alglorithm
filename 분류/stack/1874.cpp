// 스택 수열
// 자료구조, 스택
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<bool>q;
stack<int> s;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int n,val,max=1;
    s.push(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        if(s.top()<val){
            for(int i=max;i<=val;i++){
                s.push(i);
                q.push(1);
            }
            max=val+1;
        }
        if(s.top()==val){
            s.pop();
            q.push(0);
        }
        if(s.top()>val){
            cout<<"NO";
            exit(0);
        }
    }
    while(!q.empty()){
        cout<<(q.front()?'+':'-')<<"\n";
        q.pop();
    }
}