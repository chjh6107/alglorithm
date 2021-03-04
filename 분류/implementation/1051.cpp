// 숫자 정사각형
// 구현, 브루트포스 알고리즘
#include <iostream>
#include <algorithm>
using namespace std;
int A[50][50],N,M;
int res(){
    int ret=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            for(int k=0;k<min(N,M);k++){
                if(i+k<N&&j+k<M){
                    if(A[i][j]==A[i][j+k]&&A[i][j]==A[i+k][j]
                        &&A[i][j]==A[i+k][j+k]){
                            int len=k+1;
                            ret=max(ret,len);
                        }
                }
            }
        }
    }
    return ret*ret;
}
int main(){
    int n,max=0,val=0,prev=0;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>n;
        for(int j=M-1;n;j--){
            A[i][j]=n%10;
            n/=10;
        }
    }
    cout<<res();
}