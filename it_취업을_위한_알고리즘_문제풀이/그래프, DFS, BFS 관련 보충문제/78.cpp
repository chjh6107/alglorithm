// 78. 원더랜드(Kruskal MST 알고리즘 : Union&Find 활용)
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int unf[10001];
struct Edge{
    int a;
    int b;
    int dist;
    Edge(int _a,int _b, int _d):a(_a),b(_b),dist(_d){};
    bool operator<(Edge &edge){
        return dist<edge.dist;
    }
};

int Find(int v){
    return v==unf[v]?v:unf[v]=Find(unf[v]);
} 
int Union(int a, int b){
    a=Find(a);
    b=Find(b);
    if(a!=b) unf[a]=b;
}

int main(){
    int n,m,res=0;
    vector<Edge> v;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)unf[i]=i;
    for(int i=0;i<m;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        v.push_back(Edge(a,b,c));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        int a,b;
        a=Find(v[i].a);
        b=Find(v[i].b);
        if(a!=b){
            res+=v[i].dist;
            Union(a,b);
        }
    }
    printf("%d",res);
}