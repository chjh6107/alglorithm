// 에라토스테네스의 체
// 수학, 구현, 정수론, 소수 판정, 에라토스테네스의 체
#include <iostream>
int A[1001];
int main(){
    int N,K,res,cnt=0;
    std::cin>>N>>K;
    for(int i=2;i<=N;i++)A[i]=i;
    for(int i=2;cnt!=K;i++){
        if(A[i]){
            for(int j=i;j<=N;j+=i){
                if(A[j]){
                    A[j]=0;
                    cnt++;
                    if(cnt==K){
                        std::cout<<j;
                        return 0;
                    }
                }
            }
        }
    }
}