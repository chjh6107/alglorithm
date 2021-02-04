// 69. 이진트리 넓이우선탐색(BFS) 무방향인접리스트
#include <iostream>
#include <vector>
using namespace std;
int Q[100], front=-1, back=-1, check[10];
vector<int> map[10];

void bfs(int v){
    while(front<back){
        int x=Q[++front]; //큐에서 꺼냄
        cout<<x<<" ";
        for(int i=0;i<map[x].size();i++){
            if(!check[map[x][i]]){
                check[map[x][i]]=1;
                Q[++back]=map[x][i];
            }
        }
    }
}
int main(){
    int a,b;
    for(int i=1;i<=6;i++){
        cin>>a>>b;
        map[a].push_back(b);
        map[b].push_back(a);
    }
    Q[++back]=1;//1번 루트노드
    check[1]=1;//방문처리
    bfs(1);
}