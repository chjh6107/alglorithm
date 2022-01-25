// 최소공배수
// 수학, 유클리드 호제법, 정수론
#include<iostream>
using namespace std;
int main(){
    int T,a,b,min,max;
    cin>>T;
    while(T--){
        cin>>a>>b;
        max=a>b?a:b;
        min=a<b?a:b;
        for(int i=1;;i++){
            if(!((min*i)%max)){
                cout<<min*i<<"\n";
                break;
            }
        }
    }
}