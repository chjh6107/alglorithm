// 86. 피자 배달 거리(삼성 SW역량평가 기출문제 : DFS활용)
#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<pair<int,int>>pz,hs;
int ch[51];
void dfs(int L,int cnt){
    if(L==m){
        for(int i=0;i<pz.size();i++){
            if(ch[i])cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i=0;i<pz.size();i++){
        if(!ch[i]){
            ch[i]=1;
            dfs(L+1,cnt+1);
            ch[i]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    freopen("input.txt","r",stdin);
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
}