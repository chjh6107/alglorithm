// 콘테스트
#include <stdio.h>
#define SWAP(a,b) {int t=a;a=b;b=t;}
int main(){
    int a[10],b[10],sa=0,sb=0;
    for(int i=0;i<10;i++) scanf("%d",&a[i]);
    for(int i=0;i<10;i++) scanf("%d",&b[i]);

    for(int i=0;i<3;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]<a[j]) SWAP(a[i],a[j]);
            if(b[i]<b[j]) SWAP(b[i],b[j]);
        }
        sa+=a[i];sb+=b[i];
    }
    printf("%d %d\n",sa,sb);
}