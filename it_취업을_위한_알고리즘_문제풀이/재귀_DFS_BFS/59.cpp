// 59. 부분집합(DFS)
#include <iostream>
using namespace std;
int n, ch[11]={0,};
void dfs(int L){
    if(L>n){
        for(int i=1;i<=n;i++) if(ch[i]) cout<<i<<" ";
        cout<<"\n";
    } 
    else{
        ch[L]=1;
        dfs(L+1);
        ch[L]=0;
        dfs(L+1);
    }
}

int main(){
    cin>>n;
    dfs(1);
}