// 나무 조각
#include <stdio.h>
#define SWAP(a,b) {int t=a; a=b; b=t;}

int main(){
    int arr[5],n;
    const int check[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        arr[i]=n;
    }
    while(1){
        int cnt = 0;
        for(int i=0;i<4;i++){
            if(arr[i]>arr[i+1]){
                SWAP(arr[i],arr[i+1]);
                for(int j=0;j<5;j++) printf("%d ",arr[j]);
                printf("\n");
            }
            if(check[i] == arr[i]) cnt++;
            else cnt--;
            if(i==3){
                if(check[4]==arr[4])cnt++;
                else cnt--;
            }
        }
        if(cnt==5) break;
    }
}