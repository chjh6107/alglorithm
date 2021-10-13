// 왕실의 나이트
#include<iostream>
using namespace std;
int dx[8]={2,2,-2,-2,1,-1,1,-1};
int dy[8]={1,-1,1,-1,-2,-2,2,2};
int main(){
    int x,y,res=0;
    string direct;
    cin>>direct;
    x=direct[0]-'a'+1;
    y=direct[1]-'0';
    for(int i=0;i<8;i++)
        if(x+dx[i]<=8&&x+dx[i]>=1&&y+dy[i]<=8&&y+dy[i]>=1)res++;
    cout<<res;
}