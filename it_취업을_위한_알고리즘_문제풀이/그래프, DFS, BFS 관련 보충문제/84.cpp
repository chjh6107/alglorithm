// 84. 휴가(삼성 SW역량평가 기출문제 : DFS활용)
#include<iostream>
#include<vector>
using std::cin;
int N;
int max=-1;
std::vector<std::pair<int,int>>v(16);
bool visit[16];
void dfs(int L,int sum){
    if(L==N+1){
        if(sum>max)max=sum;
        return;
    }
    int T=v[L].first;
    int P=v[L].second;
    if(L+T<=N+1) dfs(L+T,sum+P);
    dfs(L+1,sum);
}
int main(){
    int a,b;
    freopen("input.txt","r",stdin);
    cin>>N;
    for(int i=1;i<=N;i++)
        cin>>v[i].first>>v[i].second;
    dfs(1,0);
    std::cout<<max;
}