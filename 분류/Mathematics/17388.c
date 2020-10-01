// 와글와글 숭고한
#include <stdio.h>
int main(){
    int acc=0, n,min=100,idx;
    char s[3][10]={"Soongsil","Korea","Hanyang"};
    for(int i=0;i<3;i++){
        scanf("%d",&n);
        if(min>n){
            min=n;
            idx=i;
        }
        acc+=n;
    }
    if(acc<100) printf("%s\n",s[idx]);
    else printf("OK\n");
}