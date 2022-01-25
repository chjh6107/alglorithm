// 기타 레슨
// 이분 탐색
#include <cstdio>
#include <algorithm>
int A[100001];
int N,M;
bool binSearch(int n){
    int cnt=1;
    int acc=0;
    for(int i=N-1;i>=0;i--){
        if(A[i]>n)return 0;
        acc+=A[i];
        if(acc>n){
            acc=A[i];
            cnt++;
        }
    }
    return M>=cnt?1:0;
}
int main(){
    int left=0,mid,right=0,res;
    scanf("%d%d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        right+=A[i];
    }
    while(left<=right){
         mid=(left+right)/2;
        bool flag=binSearch(mid);
        if(flag){
            right=mid-1;
            res=mid;
        }
        else left=mid+1;       
    }
    printf("%d",res);
}