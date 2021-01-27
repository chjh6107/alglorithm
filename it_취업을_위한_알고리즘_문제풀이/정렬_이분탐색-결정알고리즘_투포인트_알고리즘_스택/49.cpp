// 49. 블록의 최댓값
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n, val, acc=0;
    scanf("%d",&n);
    vector<int> v(n);

    for(int i=0;i<n;i++) scanf("%d",&v[i]);
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        for(int j=0;j<n;j++)
            acc += v[j]<val?v[j]:val;
    }
    printf("%d",acc);
}