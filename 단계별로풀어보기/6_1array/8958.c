//OX퀴즈
#include <stdio.h>

int main(){
    int tc;
    char str[80];

    scanf("%d",&tc);
    for(int i=0; i<tc;i++){
        int score=0, acc=0;
        scanf("%s",str);

        for(int j=0; str[j] != '\0'; j++){
            if(str[j]=='O'){
                acc++;
                score += acc;
            }else acc = 0;
        }
        printf("%d\n",score);
    }
}