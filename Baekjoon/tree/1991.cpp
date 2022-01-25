// 트리 순회
// 트리, 재귀
#include <cstdio>
#include <vector>
std::vector<int> v[91];
void sol(int c,int sel){
    if(sel==1)printf("%c",c);
    if(v[c][0]!='.') sol(v[c][0],sel);
    if(sel==2)printf("%c",c);
    if(v[c][1]!='.') sol(v[c][1],sel);
    if(sel==3)printf("%c",c);
}
int main(){
    int N,start;
    char a,b;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf(" %c",&a);
        if(!i)start=a;
        for(int j=0;j<2;j++){
            scanf(" %c",&b);
            v[a].push_back(b);
        }
    }
    sol(start,1);
    printf("\n");
    sol(start,2);
    printf("\n");
    sol(start,3);
    printf("\n");
}