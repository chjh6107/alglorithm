#include <stdio.h>

void print(int sel){
    printf("%d",sel);
}
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    if(x>0&&y>0) print(1);
    else if(x<0&&y>0) print(2);
    else if(x<0&&y<0) print(3);
    else print(4);

    return 0;
}
