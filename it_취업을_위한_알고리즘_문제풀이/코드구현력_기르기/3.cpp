// 3. 진약수의 합
#include <iostream>
using namespace std;

int main(){
	int n, sum=1;
	cin>>n;
	
	cout << 1;
	for(int i=2;i<n;i++){
		if(!(n%i)){
			cout << " + " << i;
			sum+=i;
		}
	}
	cout << " = " << sum;
}