//피보나치 수5
#include <stdio.h>
int fibonacci(int n){
    if(n>=2) return fibonacci(n-1) + fibonacci(n-2);
    else return n; 
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));

}