// 괄호
#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int count=0;
        char Stack[50];
        scanf("%s",Stack);

        for(int j=0;Stack[j]!='\0';j++){
            if(Stack[j]=='(') count++;
            else count--;
            if(count<0) break;
        }
        if(!count)printf("YES\n");
        else printf("NO\n");
    }
}
