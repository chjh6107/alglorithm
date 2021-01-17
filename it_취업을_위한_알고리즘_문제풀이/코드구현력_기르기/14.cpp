// 14. 뒤집은 소수
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
	int n, num, flag = 1;
	cin >> n;

	while (n--) {
		cin >> num;
		num = reverse(num);
		flag = isPrime(num);
		if (flag) cout << num << " ";
	}
}