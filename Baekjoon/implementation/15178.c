// Angles
#include <stdio.h>

int main(){
    int N,val;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int acc=0;
        for(int j=0;j<3;j++){
            scanf("%d",&val);
            printf("%d ",val);
            acc +=val;
        }
    printf("%s\n",acc==180?"Seems OK" : "Check");
    }
}