// 61. 특정 수 만들기(DFS : MS 인터뷰)
#include <iostream>
#include <vector>
using namespace std;
int n,m,a[11], ch[11],acc=0;

void calDfs(vector<int> A, int L, int sum){
    if(L>A.size()){
        if(sum==m) acc++;
        return;
    }
    calDfs(A,L+1,sum+A[L-1]); //pstv
    calDfs(A,L+1,sum-A[L-1]); //ngtv
}
void dfs(int L){
    if(L>n){
        vector<int> tmp;
        for(int i=1;i<=n;i++) if(ch[i]) tmp.push_back(a[i]);
        calDfs(tmp, 1, 0);        
        return;
    }
    ch[L]=1;
    dfs(L+1); //참여
    ch[L]=0;
    dfs(L+1); //미참여
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    dfs(1);
    cout<<(acc?acc:-1);
}