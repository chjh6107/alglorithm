// 좌표 정렬하기 2
#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>> a;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt","r",stdin);
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a.push({y,x});
    }
    while(!a.empty()){
        cout<<a.top().second<<" "<<a.top().first<<"\n";
        a.pop();
    }
}