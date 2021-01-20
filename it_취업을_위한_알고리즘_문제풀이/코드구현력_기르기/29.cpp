// 29. 3의 개수는?(small)
#include <iostream>
using namespace std;

int main() {
	int n, tmp, cnt = 0;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		tmp = i;
		while (tmp) {
			if (tmp % 10 == 3)cnt++;
			tmp /= 10;
		}
	}
	cout << cnt;
}