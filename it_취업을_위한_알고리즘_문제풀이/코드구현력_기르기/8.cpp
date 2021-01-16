// 8. 올바른 괄호
#include <iostream>
using namespace std;

int main(){
	char n[30];
	int cnt=0;
	cin>>n;
	for(int i=0;n[i]!='\0';i++) {
		cnt += n[i]=='('?1:-1;
		if(cnt==-1)break;
	}
	cout<<(!cnt?"YES":"NO");
}