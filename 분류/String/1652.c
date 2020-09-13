// 누울 자리를 찾아라
#include <stdio.h>

int main(){
    char map[100][100];
    int N,xCnt=0,yCnt=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%s",map[i]);

    for(int i=0;i<N;i++){
        int max=0, xChk=0;
        for(int j=0;j<N;j++){
            if(map[i][j] == '.'){
                xChk++;
                if(max<xChk)max=xChk;
            }
            if(map[i][j]=='X'){
                if(max>1) xCnt++;
                xChk=0;
                max=0;
            }
        }
        if(max>1) xCnt++;
    }

    for(int j=0;j<N;j++){
        int max=0, yChk=0;
        for(int i=0;i<N;i++){
            if(map[i][j] == '.'){
                yChk++;
                if(max<yChk)max=yChk;
            }
            if(map[i][j]=='X'){
                if(max>1) yCnt++;
                yChk=0;
                max=0;
            }
        }
        if(max>1) yCnt++;
    }
    printf("%d %d\n",xCnt,yCnt);
}