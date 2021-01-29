// 53. K진수 출력(Stack 직접구현)
#include <cstdio>
#include <cmath>
int Stack[10]={0,};
int top=-1;

int main(){
    int n,k,bit;
    scanf("%d %d",&n,&k);

    for(int i=1;n;i++){
        bit=pow(k,i);
        Stack[++top]=(n%bit)/pow(k,i-1);
        n-=n%bit;
    }
    while(top!=-1){
        if(Stack[top]>=10)
            printf("%c",'A'+Stack[top--]-10);
        else printf("%d",Stack[top--]);
    }
}