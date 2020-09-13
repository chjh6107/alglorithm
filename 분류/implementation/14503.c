// 로봇 청소기
#include <stdio.h>
int map[50][50];

void initMap(int N,int M){
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            scanf("%d",&map[i][j]);
}

int cleaning(int r, int c){
    map[r][c]=6; //따봉bb
    return 1;
}

int checkRoutine(int *r, int *c, int *d){
    int tr=*r, tc=*c;
    switch(*d){
        case 0:
            --tc;
            *d=3;
            break;
        case 1:
            --tr;
            --*d;
            break;
        case 2:
            ++tc;
            --*d;
            break;
        case 3:
            ++tr;
            --*d;
            break;
    }
    if(map[tr][tc]==0){
        *r = tr; *c= tc;
        return 1;
    }
    else return 0;
}

int checkRear(int *r, int *c, int *d){
    int tr=*r, tc=*c;
        switch(*d){
        case 0:
            ++tr;
            break;
        case 1:
            --tc;
            break;
        case 2:
            --tr;
            break;
        case 3:
            ++tc;
            break;
    }
    if(map[tr][tc] != 1){
        *r = tr; *c = tc;
        return 1;
    }
    return 0;
}

int main(){
    int N,M,r,c,d,cnt=0,comm=1;

    scanf("%d%d%d%d%d",&N,&M,&r,&c,&d);
    initMap(N, M);

    while(1){
        switch(comm){
            case 1:
                cnt += cleaning(r,c);
                comm = 2;
                break;
            case 2:
                for(int i=0; i<4; i++){
                    if(checkRoutine(&r,&c,&d) == 1){
                        comm=1;
                        break;
                    }
                    if(i==3){
                        if(checkRear(&r,&c,&d)){
                            comm=2;
                            break;
                        }
                        else{
                            printf("%d\n",cnt);
                            return 0;
                        }
                    }
                }
                break;
        }
    }
}