// 부녀회장이 될테야
// 수학, 조합론
#include <iostream>
#include <cstring>
using namespace std;
int A[15][15];
int main(){
    int T,K,N;
    cin>>T;
    while(T--){
        for(int i=1;i<=14;i++)A[0][i]=i;
        cin>>K>>N;
        for(int i=1;i<=K;i++)
            for(int j=1;j<=N;j++)
                for(int k=1;k<=j;k++)
                    A[i][j]+=A[i-1][k];
        cout<<A[K][N]<<"\n";
        memset(A,0,sizeof(A));
    }
}