// 5. 나이계산
#include <iostream>
using namespace std;

int main(){
	char n[20], gender;
	int year, age;
	cin>>n;
	
	year = (n[7]=='1' || n[7]=='2')?1900+((n[0]-48)*10+(n[1]-48)):2000+((n[0]-48)*10+(n[1]-48));
	age = 2019-year+1;
	gender = n[7]%2?'M':'W';

	cout<<age<<" "<<gender;
}