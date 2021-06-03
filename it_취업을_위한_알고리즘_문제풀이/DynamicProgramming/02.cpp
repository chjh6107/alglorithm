// 네트워크 선 자르기(Top-Down : 재귀, 메모이제이션)
#include<iostream>
int d[46];
int dfs(int n){
    if(n<=2) return d[n]=n;
    return d[n]=dfs(n-1)+dfs(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    dfs(n);
    printf("%d",d[n]);
}