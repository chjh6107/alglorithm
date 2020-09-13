// 0 = not cute / 1 = cute
#include <stdio.h>

int main(){
    int N, n, vote=0;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&n);
        vote += n;
    }
    printf("Junhee is %s", (N/2<vote?"cute!":"not cute!"));
}