// 요세푸스 문제
// 자료구조, 큐
#include <cstdio>
#include <queue>
int main(){
    std::queue<int> q;
    int n,k,cnt=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)q.push(i);
    printf("<");
    while(!q.empty()){
        cnt++;
        if(cnt==k){
            printf("%d%s",q.front(),q.size()!=1?", ":">");
            cnt=0;
        }else q.push(q.front());
        q.pop();
    }
}