// 73. 최대힙(priority_queue : 우선순위 큐)
#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    int n;
    while(1){
        cin>>n;
        if(n==-1) break;
        if(n) pq.push(n);
        else{ //!n
            cout<<(pq.empty()?-1:pq.top())<<"\n";
            pq.pop();
        }
    }
}