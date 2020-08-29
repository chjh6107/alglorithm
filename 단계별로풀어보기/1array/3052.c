//나머지
#include <stdio.h>

int main(){
    int num, remainder[10], count=0, i,j;
    
    for(i=0; i<10; i++){
        scanf("%d",&num);
        remainder[i] = num%42;
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++)
            if(remainder[i]==remainder[j]) break;
        if(i==j) count++;
    }
    printf("%d\n",count);
}
