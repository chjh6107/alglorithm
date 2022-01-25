// 덱
// 자료구조, 덱
#include <iostream>
#include <deque>
using namespace std;
deque<int> dq;
int main(){
    cin.tie(NULL); ios::sync_with_stdio(false);
    int n;
    string str;
    cin>>n;
    while(n--){
        int x;
        cin>>str;
        if(str=="push_back"){
            cin>>x;
            dq.push_back(x);
        }
        if(str=="push_front"){
            cin>>x;
            dq.push_front(x);
        }
        if(str=="pop_front"){
            if(dq.empty())cout<<-1<<"\n";
            else{
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        if(str=="pop_back"){
            if(dq.empty())cout<<-1<<"\n";
            else{
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        if(str=="size")cout<<dq.size()<<"\n";
        if(str=="empty")cout<<dq.empty()<<"\n";
        if(str=="front")cout<<(dq.empty()?-1:dq.front())<<"\n";
        if(str=="back")cout<<(dq.empty()?-1:dq.back())<<"\n";
    }
}