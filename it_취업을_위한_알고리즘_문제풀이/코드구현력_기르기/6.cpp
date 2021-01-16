// 6. 숫자만 추출
#include <iostream>
using namespace std;

int main(){
	char n[50];
	int num=0, cnt=0;
	cin >> n;

	for(int i=0; n[i]!='\0'; i++)
		if('0'<=n[i] && n[i]<='9') num = n[i]-'0'+num*10;
	
	for(int i=1;i<=num;i++)
		cnt+=!(num%i)?1:0;
	cout << num << " " << cnt;
}