// 단어순서 뒤집기
#include <stdio.h>
#include <string.h>

int main(){
    char str[25];
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        scanf(" %[^\n]s", str);
        int top = -1;
        char Stack[25][25];
        char *ptr = strtok(str," ");

        for(int j=0;ptr != NULL;j++){
            strcpy(Stack[j],ptr);
            top++;
            ptr = strtok(NULL, " ");
        }
        printf("Case #%d: ",i+1);
        while(top != -1) printf("%s ",Stack[top--]);
        printf("\n");
    }
}