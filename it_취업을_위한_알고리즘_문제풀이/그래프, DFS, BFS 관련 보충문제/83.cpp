// 83. 복면산 SEND+MORE=MONEY (MS인터뷰)
#include<iostream>
using namespace std;
int A[10];//S E N D M O R Y
bool visit[10];
int send(){return A[0]*1000+A[1]*100+A[2]*10+A[3];}
int more(){return A[4]*1000+A[5]*100+A[6]*10+A[1];}
int money(){return A[4]*10000+A[5]*1000+A[2]*100+A[1]*10+A[7];}
void dfs(int L){
    if(L==8){
        if(send()+more()==money()){
            if(!A[0] ||!A[4]) return;

            printf("  %2d%2d%2d%2d\n",A[0],A[1],A[2],A[3]);
            printf("+%2d%2d%2d%2d\n",A[4],A[5],A[6],A[1]);
            printf("----------\n");
            printf("%d%2d%2d%2d%2d\n",A[4],A[5],A[2],A[1],A[7]);
            return;
        }
    }
    for(int i=0;i<10;i++){
        if(!visit[i]){
            A[L]=i;
            visit[i]=1;
            dfs(L+1);
            visit[i]=0;
        }
    }
}
int main(){
    dfs(0);
}