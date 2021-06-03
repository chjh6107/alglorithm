// 네트워크 선 자르기(Top-Down : 재귀, 메모이제이션)
#include<iostream>
int d[46];
int dfs(int n){
    if(d[n])return d[n]; //구했던 친구는 안거치고 바로 리턴
    if(n<=2) return d[n]=n;
    return d[n]=dfs(n-1)+dfs(n-2);
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<dfs(n);
}