// 01타일
// 다이나믹 프로그래밍
#include <iostream>
int D[1000001]={0,1,2};
int main(){
    int N;
    std::cin>>N;
    for(int i=3;i<=N;i++)
        D[i]=(D[i-1]+D[i-2])%15746;
    std::cout<<D[N];
}