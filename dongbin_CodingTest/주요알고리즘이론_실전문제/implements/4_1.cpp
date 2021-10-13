// 상하좌우
#include<iostream>
using namespace std;
int main(){
    int N,y=1,x=1;
    char d;
    cin>>N;
    for(int i=0;i<6;i++){
        cin>>d;
        if(d=='L')x+=x==1?0:-1;
        else if(d=='R')x+=x==N?0:1;
        else if(d=='U')y+=y==1?0:-1;
        else y+=y==N?0:1;
    }
    cout<<x<<' '<<y;
}