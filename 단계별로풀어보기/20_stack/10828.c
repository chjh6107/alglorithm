//스택
#include <stdio.h>
#include <string.h>

int Stack[10000];
int top= -1;

int main(){
    int N;
    char comm[5]="";
    scanf("%d",&N);
    
    Stack[N];
    for(int i=0; i<N; i++){
        scanf("%s",comm);

        if(!strcmp(comm,"push")) printf("ok\n");
    }
}