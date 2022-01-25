// 서버
#include <stdio.h>

int main(){
    int n,T,A[50]={0,},cnt=0;
    scanf("%d%d",&n,&T);

    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    
    for(int i=0;i<n;i++){
        T -= A[i];
        if(T>=0) cnt++;
        else break;
    }
    printf("%d\n",cnt);
}