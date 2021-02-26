// 분해합
// 브루트포스 알고리즘
#include<iostream>
int main(){
    int N;
    std::cin>>N;
    for(int i=0;i<=N;i++){
        int a=i;
        int b=i;
        while(a){
            b+=a%10;
            a/=10;
        }
        if(b==N){
            std::cout<<i;
            exit(0);
        }
    }
    std::cout<<0;
}