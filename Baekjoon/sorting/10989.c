//정렬3 (countingSort)
#include <stdio.h>

int main(){
    int N, input, index[10001]={0,}, i;

    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&input);
        index[input]++;
    }

    for(i=1;i<10001;i++){
            for(int j=0; j < index[i]; j++)
                printf("%d\n",i);
    }
}