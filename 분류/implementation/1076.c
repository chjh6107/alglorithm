// 저항
#include <stdio.h>
#include <string.h>

int main(){
    long int res=0;
    char color[6], colors[10][7]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    for(int i=0;i<3;i++){
        scanf("%s",color);
        for(int j=0;j<10;j++){
            if(!strcmp(color,colors[j])){
                if(i==0) res+=10*j;
                else if(i==1) res+=j;
                else if(i==2){
                    int mul=1;
                    for(int k=0; k<j;k++) mul *=10;
                    res*=mul;
                }
                break;
            }
        }
    }
    printf("%ld\n",res);
}