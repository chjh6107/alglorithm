// 소수
#include <iostream>

bool f(int x){
    if (x == 1) return false;
	for (int i = 2; i < x; i++)
		if (!(x%i)) return false;
	return true;
}

int main(){
    int m,n,sum=0,min=10001;
    std::cin>>m>>n;
    
    for(int i=m;i<=n;i++){
        if(f(i)) {
            sum+=i;
            min=i<min?i:min;
        }
    }
    if(sum) std::cout<<sum<<"\n"<<min;
    else std::cout<<-1;
}