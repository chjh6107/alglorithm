// 11. 숫자의 총 개수(large)
#include <iostream>
using namespace std;

int main(){
	int n, temp,carry=9,res=0,cnt=0,sub=0;
	cin>>n;
	temp=n;

	while(temp){
		temp/=10;
		cnt++;
	}
	for(int i=1;i<cnt;i++){
		res+=i*carry;
		sub+=carry;
		carry*=10;
	}
	res+=(n-sub)*cnt;
	cout<<res;
}