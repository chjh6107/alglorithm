// 최소비용 구하기
#include <iostream>
#include <vector>
#include <queue>
#define MAX 1001
#define INF 2147000000
using namespace std;

vector<pair<int,int>> g[MAX]; // next,cost
priority_queue<pair<int,int>> pq;
vector<int> dist(MAX,INF);
void dijkstra(){

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    int N,M,a,b,c,src,dst;
    cin>>N>>M;
    while(M--){
        cin>>a>>b>>c;
        g[a].push_back({b,c});
    }
    cin>>src>>dst;
}