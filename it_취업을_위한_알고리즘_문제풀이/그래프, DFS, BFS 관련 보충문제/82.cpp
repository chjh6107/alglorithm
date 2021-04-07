// 82. 순열구하기(DFS : Depth First Search)
#include<iostream>
using namespace std;
int nums[15];
int visit[15];
int res[15];
int acc=0;
int N,R;
void dfs(int L){
    if(L==R){
        for(int i=0;i<R;i++)cout<<res[i]<<" ";
        cout<<"\n";
        acc++;
        return;
    }
    for(int i=0;i<N;i++){
        if(!visit[i]){
            visit[i]=1;
            res[L]=nums[i];
            dfs(L+1);
            visit[i]=0;
        }
    }
}
int main(){
    freopen("input.txt","r",stdin);
    cin>>N>>R;
    for(int i=0;i<N;i++)cin>>nums[i];
    dfs(0);
    cout<<acc;
}