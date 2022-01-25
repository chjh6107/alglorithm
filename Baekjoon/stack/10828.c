//스택
#include <stdio.h>
#include <string.h>

int Stack[10000];
int top= -1, N;

void push(){
    int data;
    scanf("%d",&data);
    Stack[++top] = data;
}

void pop(){
    if(top<0) printf("-1\n");
    else{
        printf("%d\n",Stack[top]);
        top--;
    }
}

void printsize(){
    printf("%d\n",top+1);
}

void printEmpty(){
    if(top < 0) printf("1\n");
    else printf("0\n");
}

void printTop(){
    if(top<0) printf("-1\n");
    else printf("%d\n",Stack[top]);
}

int main(){
    char comm[5]="";
    scanf("%d",&N);
    
    Stack[N];
    for(int i=0; i<N; i++){
        scanf("%s",comm);
        if(!strcmp(comm,"push")) push();
        else if(!strcmp(comm,"pop")) pop();
        else if(!strcmp(comm,"size")) printsize();
        else if(!strcmp(comm,"empty")) printEmpty();
        else if(!strcmp(comm,"top")) printTop();
    }
}