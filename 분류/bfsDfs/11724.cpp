// 연결 요소의 개수
// 그래프 이론, 그래프 탐색, 너비 우선 탐색, 깊이 우선 탐색
#include <cstdio>
#include <vector>
std::vector<int> v[1001];
int visit[1001];
int N,M;
void D(int x){
    for(int i=0;i<v[x].size();i++){
        int next=v[x][i];
        if(!visit[next]){
            visit[next]=1;
            D(next);
        }
    }
}
int main(){
    int cnt=0;
    scanf("%d%d",&N,&M);
    for(int i=0;i<M;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=N;i++){
        if(!visit[i]){
            visit[i]=1;
            D(i);
            cnt++;
        }
    }
    printf("%d",cnt);
}