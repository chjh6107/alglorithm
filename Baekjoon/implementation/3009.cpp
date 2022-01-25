// 네 번째 점
// 구현, 기하학
#include <iostream>
int x[1001],y[1001];
int main(){
    int a,b;
    for(int i=0;i<3;i++){
        std::cin>>a>>b;
        x[a]++;y[b]++;
    }
    for(int i=1;i<=1000;i++){
        if(x[i]==1)a=i;
        if(y[i]==1)b=i;
    }
    std::cout<<a<<" "<<b;
}