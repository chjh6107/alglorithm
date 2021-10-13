// 시각(브루트포스)
#include<iostream>
using namespace std;
int main(){
    int N,res=0;
    char buf[7];
    cin>>N;
    for(int h=0;h<=N;h++){
        for(int m=0;m<60;m++){
            for(int s=0;s<60;s++){
                sprintf(buf,"%02d%02d%02d",h,m,s);
                for(int i=0;i<6;i++){
                    if(buf[i]-'0'==3){
                        res++;
                        break;
                    }
                }
            }
        }
    }
    cout<<res;
}