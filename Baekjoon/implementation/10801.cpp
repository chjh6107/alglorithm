// 카드게임
// 구현
#include <iostream>
using namespace std;
int main(){
    int a[10],b,n=0,m=0;
    for(int i=0;i<10;i++)cin>>a[i];
    for(int i=0;i<10;i++){
        cin>>b;
        if(a[i]>b)n++;
        else if(a[i]<b)m++;
    }
    printf("%c",n>m?'A':n<m?'B':'D');
}