// 숨바꼭질
// 그래프 이론, 그래프 탐색, 너비 우선 탐색
#include <iostream>
#include <queue>
using namespace std;
int visit[100001];
queue<pair<int,int>> Q;
int mv[]={-1,1};
int n,k;
void bfs(){
    Q.push({n,0});
    visit[n]=1;
    while(!Q.empty()){
        int v=Q.front().first;
        int time=Q.front().second;
        Q.pop();
        if(v==k){
            cout<<time;
            break;
        }
        for(int i=0;i<3;i++){
            int next=v+(i<2?mv[i]:v);
            if(next<0||next>100000)continue;
            if(!visit[next]){
                visit[next]=1;
                Q.push({next,time+1});
            }
        }
    }
}
int main(){
    cin>>n>>k;
    bfs();
}