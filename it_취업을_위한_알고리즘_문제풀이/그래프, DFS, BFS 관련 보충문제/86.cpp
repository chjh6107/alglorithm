// 86. 피자 배달 거리(삼성 SW역량평가 기출문제 : DFS활용)
#include<bits/stdc++.h>
#define LIM 2147000000
using namespace std;
int n,m,res=LIM,dist,sum=0;
vector<pair<int,int>>pz,hs;
int ch[20];
void dfs(int L,int s){
    if(L==m){
        sum=0;
        for(int i=0;i<hs.size();i++){
            int x1=hs[i].first;
            int y1=hs[i].second;
            dist=LIM;
            for(int j=0;j<m;j++){
                int x2=pz[ch[j]].first;
                int y2=pz[ch[j]].second;
                dist=min(dist,abs(x1-x2)+abs(y1-y2));
            }
            sum+=dist;
        }
        if(sum<res)res=sum;
        return;
    }
    for(int i=s;i<pz.size();i++){
        ch[L]=i;
        dfs(L+1,i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    // freopen("input.txt","r",stdin);
    int val;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>val;
            if(val==1)hs.push_back({i,j});
            if(val==2)pz.push_back({i,j});
        }
    }
    dfs(0,0);
    cout<<res;
}