//괄호
#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d",&T);

    for(int i=0; i<T; i++){
        char Stack[50]="";
        int top = -1, flag=0;
        char str[50];

        scanf("%s",str);
        for(int j=0; j<strlen(str); j++){
            if(str[j]=='(') Stack[++top] = str[j];
            else if(str[j]== ')'){
                if(Stack[top]=='('){
                    flag=1;
                    Stack[--top];
                }
                else flag=0;
            }
        }
    }
}