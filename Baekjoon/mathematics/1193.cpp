// 분수찾기
#include <cstdio>

int main(){
    int x,son=1,mthr=1, indication=1;
    bool direction=1;
    scanf("%d",&x);
    for(int i=1, j=0; i<x;i++, j++){
        if(j>indication){
            indication++;
            j=0;
            direction = !direction;
        }
        if(direction){
            if(!j) mthr++;
            else{
                mthr--;
                son++;
            }
        }else{
            if(!j) son++;
            else{
                mthr++;
                son--;
            }
        }
    }
    printf("%d/%d\n",son,mthr);
}