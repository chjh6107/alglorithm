// 팰린드롬수
// 구현, 문자열
#include <iostream>
using namespace std;
int main(){
    string str;
    while(1){
        cin>>str;
        if(str=="0")break;
        int mid,flag=1;
        int len=str.length();
        if(len%2){
            mid=len/2;
            for(int i=0;i<mid;i++){
                if(str[i]!=str[len-i-1]){
                    flag=0;
                    break;
                }
            }
        }else{
            mid=len/2-1;
            for(int i=0;i<=mid;i++){
                if(str[i]!=str[len-i-1]){
                    flag=0;
                    break;
                }
            }
        }
        cout<<(flag?"yes":"no")<<"\n";
    }
}