// 79. 원더랜드(Prim MST 알고리즘 : priority_queue 활용)
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
struct Data{
    int e,v;
    Data(int e,int v):e(e),v(v){};
    bool operator<(const Data&d)const{return v>d.v;}
};
priority_queue<Data> pq;
vector<pair<int,int>>v[101];
int visit[101],V,E,res=0;
void bfs(){
    pq.push({1,0});
    while(!pq.empty()){
        int e=pq.top().e;
        int cost=pq.top().v;
        pq.pop();
        if(!visit[e]){
            res+=cost;
            visit[e]=1;
            for(int i=0;i<v[e].size();i++)
                pq.push(Data(v[e][i].first,v[e][i].second));
        }
    }
}
int main(){
    scanf("%d%d",&V,&E);
    for(int i=0;i<E;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    bfs();
    printf("%d",res);
}