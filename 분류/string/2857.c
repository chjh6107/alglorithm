// FBI
#include <stdio.h>
#include <string.h>

int main(){
    char s[10], t[3]="FBI";
    int flag, cnt=0;
    for(int i=0;i<5;i++){
        flag=0;
        scanf("%s",s);
        for(int j=0;j<strlen(s)-2;j++){
            if(s[j]=='F'){
                for(int k=0;k<3;k++){
                    if(s[j+k]==t[k]) flag=1;
                    else{
                        flag=0; break;
                    }
                    
                }
            }
        }
        if(flag){
            printf("%d ",i+1);
            cnt++;
        }
    }
    if(!cnt) printf("HE GOT AWAY!");
}