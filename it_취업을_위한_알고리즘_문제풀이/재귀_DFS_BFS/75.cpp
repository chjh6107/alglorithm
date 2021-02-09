// 75. 최대 수입 스케쥴(priority_queue 응용문제)
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    int N,D,M,res=0;
    scanf("%d",&N);
    vector<pair<int,int>> v;
    for(int i=0;i<N;i++) {
        scanf("%d %d",&M,&D);
        v.push_back({D,M});
    }
    sort(v.rbegin(),v.rend());
    for(int cur=0,i=v.front().first;i>0;i--){
        while(v[cur].first==i)pq.push(v[cur++].second);
        if(!pq.empty()){
            res+=pq.top();
            pq.pop();
        }
    }
    printf("%d\n",res);
}