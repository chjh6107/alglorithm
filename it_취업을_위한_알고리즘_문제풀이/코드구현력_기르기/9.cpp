// 9. 모두의 약수
#include <iostream>

using namespace std;

int main(){
	int n, arr[50001];
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j=j+i) arr[j]++;
		cout<<arr[i]<<" ";
	}
}
