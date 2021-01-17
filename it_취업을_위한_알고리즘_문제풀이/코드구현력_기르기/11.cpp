// 11. 숫자의 총 개수(small)
#include <iostream>
using namespace std;

int main(){
	int n,temp,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		temp=i;
		while(temp){
			temp/=10;
			cnt++;
		}
	}
	cout<<cnt;
}