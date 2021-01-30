// 60. 합이 같은 부분집합(DFS : 아마존 인터뷰)
#include <iostream>
using namespace std;
int n, ch[11]={0,}, a[11]={0,}, flag=0;
void dfs(int L){
    if(flag) return;
    if(L>n){
        int l=0,r=0;
        if(!flag){
            for(int i=1;i<=n;i++){
                if(ch[i]) l+=a[i];
                else r+=a[i];
            }
            if(l==r) flag=1;
        }
        return;
    } 
    ch[L]=a[L];
    dfs(L+1);
    ch[L]=0;
    dfs(L+1);
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    dfs(1);
    cout<<(flag?"YES":"NO");
}