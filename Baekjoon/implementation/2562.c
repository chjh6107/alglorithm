//최댓값
#include <stdio.h>

int main(){
    int arr[9];
    int index, max=0;

    for(int i=0;i<9;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
            index = i+1;
        }
    }
    printf("%d\n%d\n",max,index);
}