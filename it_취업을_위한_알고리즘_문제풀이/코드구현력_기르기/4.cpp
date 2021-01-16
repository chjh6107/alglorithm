// 4. 나이 차이
#include <iostream>
using namespace std;

int main(){
	int n, age, max=-1, min=200;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>age;
		max = age>max?age:max;
		min = age<min?age:min;
	}
	cout<<max-min;
}
