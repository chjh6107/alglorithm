// 짝수를 찾아라
#include <stdio.h>

int main(){
    int T;

    scanf("%d",&T);
    for(int i=0; i<T; i++){
        int min=101,acc=0,n;
        for(int j=0; j<7; j++){
            scanf("%d",&n);
            if(!(n%2)){
                if(min>n)min=n;
                acc+=n;
            }
        }
        printf("%d %d\n",acc,min);
    }
}