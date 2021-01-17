// 15. 소수의 개수
#include <iostream>
using namespace std;

int main() {
	int n, num, flag = 1, cnt = 0;;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		flag = 1;
		for (int j = 2; j*j <= i; j++) {
			if (!(i%j)) {
				flag = 0;
				break;
			}
		}
		if(flag) cnt++;
	}
	cout << cnt;
}