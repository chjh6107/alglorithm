//소수 찾기
#include <stdio.h>

int main(){
    int n,arr[1000],prime=0,num,k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i] == 1) 
            continue;
        else{
            num = arr[i];
            while(num>0){
                if(arr[i]%num == 0) 
                    k++;
                num--;
            }
        }
        if(k == 2)
            prime++; 
        k = 0;
    }
    printf("%d",prime);
    return 0;
}