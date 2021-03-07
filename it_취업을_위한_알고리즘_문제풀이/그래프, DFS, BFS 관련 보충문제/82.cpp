// 순열구하기(DFS : Depth First Search)
#include <iostream>
using namespace std;
int arr[15],res[15],visit[15];
int N,R,acc=0;
void dfs(int L){
    if(L==R){
        for(int i=0;i<R;i++) cout<<res[i]<<" ";
        cout<<'\n';
        acc++;
        return;
    }
    for(int i=0;i<N;i++){
        if(!visit[i]){
            res[L]=arr[i];
            visit[i]=1;
            dfs(L+1);
            visit[i]=0;
        }
    }
}
int main(){
    cin>>N>>R;
    for(int i=0;i<N;i++)
        cin>>arr[i];   
    dfs(0);
    cout<<acc;
}