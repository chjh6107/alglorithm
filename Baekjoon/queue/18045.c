// 큐
#include <stdio.h>
#include <string.h>
int Queue[10000];
int front=0,rear=0;

void push(){
    int x;
    scanf("%d",&x);
    Queue[rear++]=x;
}

void pop(){
    if(rear==front)printf("-1\n");
    else printf("%d\n",Queue[front++]);
}

void size(){
    printf("%d\n",rear-front);
}

void empty(){
    printf("%d\n",rear-front?0:1);
}

void fr(int n){
    printf("%d\n",rear-front?(n?Queue[front]:Queue[rear-1]):-1);
}
int main(){
    int n;
    char comm[5];
    scanf("%d",&n);
    
    while(n--){
        scanf("%s",comm);
        if(!strcmp(comm,"push")) push();
        else if(!strcmp(comm,"pop")) pop();
        else if(!strcmp(comm,"size")) size();
        else if(!strcmp(comm,"empty")) empty();
        else if(!strcmp(comm,"front")) fr(1);
        else if(!strcmp(comm,"back")) fr(0);
    }
}
