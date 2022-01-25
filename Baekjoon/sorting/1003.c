//피보나치 함수
#include <stdio.h>

int cnt[41][2]={{1,0},{0,1}};

void fibonacci(int n) {
    if(n == 0 || n == 1);
    
    else{
        for(int i=2; i<=n; i++){
            cnt[i][0] = cnt[i-1][0]+cnt[i-2][0];
            cnt[i][1] = cnt[i-1][1]+cnt[i-2][1];
        }
    }
}

int main(){
    int T,N;

    scanf("%d",&T);
    for(int i=0; i<T; i++){
        scanf("%d",&N);

        fibonacci(N);
        printf("%d %d\n",cnt[N][0],cnt[N][1]);
    }
}