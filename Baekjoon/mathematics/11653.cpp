// 소인수분해
// 수학, 정수론, 소수 판정
#include <iostream>
int main(){
    int N;
    std::cin>>N;
    while(N>1){
        for(int i=2;;i++){
            if(!(N%i)){
                std::cout<<i<<"\n";
                N/=i;
                break;
            }
        }
    }
}