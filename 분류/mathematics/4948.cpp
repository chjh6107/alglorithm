// 베르트랑 공준
// 수학, 정수론, 소수 판정, 에라토스테네스의 체
#include <cstdio>
int main(){
    int n,m,acc;
    while(1){
        acc=0;
        scanf("%d",&n);
        if(!n)break;
        m=n*2;
        int *a= new int[m+1];
        for(int i=2;i<=m;i++) a[i]=i;
        for(int i=2;i<=m;i++){
            if(!a[i]) continue;
            for(int j=i*2; j<=m; j+=i) a[j]=0;
        }
        for(int i=n+1;i<=m;i++) acc+=a[i]?1:0;
        printf("%d\n",acc);
        delete a;
    }
}