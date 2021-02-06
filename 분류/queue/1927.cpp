// 최소 힙
// 자료 구조, 우선순위 큐
#include <cstdio>
#include <queue>
int main(){
    std::priority_queue<int> pq;
    int n,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a) pq.push(-a);
        else{
            if(pq.empty()) printf("0\n");
            else{
                printf("%d\n",-pq.top());
                pq.pop();
            }
        }
    }
}