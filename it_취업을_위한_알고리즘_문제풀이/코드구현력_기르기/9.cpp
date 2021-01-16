// 9. 모두의 약수
#include <iostream>
using namespace std;
int n, arr[50001];
int main(){
	ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j=j+i){
			arr[j]++;
		}
	}
	for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
}
