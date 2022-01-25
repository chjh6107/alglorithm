// 최소 스패닝 트리
// 그래프 이론, 최소 스패닝 트리
#include <cstdio>
#include <vector>
#include <algorithm>
int arr[10001];
struct Edge{
    int a,b,dist;
    Edge(int a,int b,int d):a(a),b(b),dist(d){};
    bool operator<(const Edge e){return dist<e.dist;}
};
int F(int v){
    return v==arr[v]?v:arr[v]=F(arr[v]);
}
void U(int a,int b){
    a=F(a);
    b=F(b);
    if(a!=b)arr[a]=b;
}
int main(){
    std::vector<Edge> v;
    int n,m,res=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)arr[i]=i;
    for(int i=0;i<m;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        v.push_back(Edge(a,b,c));
    }
    std::sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        int a=F(v[i].a);
        int b=F(v[i].b);
        if(a!=b){
            res+=v[i].dist;
            U(a,b);
        }
    }
    printf("%d",res);
}