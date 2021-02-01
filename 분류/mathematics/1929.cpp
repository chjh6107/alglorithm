// 소수 구하기
#include <cstdio>

int main(){
    int m, n;
    scanf("%d %d",&m,&n);
    int *A = new int[n+1];
    for(int i=2;i<=n;i++) A[i]=i;

    for(int i=2;i<=n;i++){
        if(A[i])
            for(int j=i*2;j<=n;j+=i) A[j]=0;        
    }

    for(int i=m;i<=n;i++)
        if(A[i]) printf("%d\n",A[i]);

    delete A;
}