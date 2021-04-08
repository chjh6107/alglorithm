// 수식만들기(삼성 SW역량평가 기출문제 : DFS활용)
#include<iostream>
using namespace std;
int N;
int opCnt=0;
int a[11];
int op[4];
int Min=2147000000, Max=0;
void dfs(int L,int val){
    if(N==L){
        if(Max<val)Max=val;
        if(Min>val)Min=val;
        return;
    }
    if(op[0]){
        op[0]--;
        dfs(L+1,val+a[L]);
        op[0]++;
    }
    if(op[1]){
        op[1]--;
        dfs(L+1,val-a[L]);
        op[1]++;
    }
    if(op[2]){
        op[2]--;
        dfs(L+1,val*a[L]);
        op[2]++;
    }
    if(op[3]){
        op[3]--;
        dfs(L+1,val/a[L]);
        op[3]++;
    }

}
int main(){
    freopen("input.txt","r",stdin);
    cin>>N;
    for(int i=0;i<N;i++)cin>>a[i];
    for(int i=0;i<4;i++){
        cin>>op[i];
        opCnt+=op[i];
    }
    dfs(1,a[0]);
    cout<<Max<<"\n"<<Min;
}