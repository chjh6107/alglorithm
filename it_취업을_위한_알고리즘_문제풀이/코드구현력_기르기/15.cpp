// 15. 소수의 개수
#include <iostream>
using namespace std;

int reverse(int x) {
	int ret = 0;
	while (x) {
		ret = x%10 + ret*10;
		x /= 10;
	}
	return ret;
}

bool isPrime(int x) {
	if (x == 1) return false;
	for (int i = 2; i < x; i++) {
		if (!(x%i)) return false;
	}
	return true;
}

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