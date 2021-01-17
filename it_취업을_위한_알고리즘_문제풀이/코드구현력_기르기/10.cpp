// 10. 자릿수의 합
#include <iostream>
using namespace std;

int digit_sum(int x){
	int ret=0;
	
	while(x){
		ret+=x%10;
		x/=10;
	}
	return ret;
}
int main(){
	int n, num, sum, maxNum=-1, max=-1;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		sum=digit_sum(num);
		if(sum>max){
			max=sum;
			maxNum = num;
		}
		else if(sum==max) maxNum = num>maxNum?num:maxNum;
	}
	cout<<maxNum;
}