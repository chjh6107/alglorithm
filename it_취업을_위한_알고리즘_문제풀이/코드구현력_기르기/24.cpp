// 24. Jolly Jumpers
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, current, prev, sub, flag;
	cin >> n;
	vector<int> a(n-1);

	for (int i = 0; i < n; i++) {
		cin >> current;
		if (!i) {
			prev = current;
			continue;
		}
		sub = prev - current;
		sub = sub > 0 ? sub : -sub;
		if (sub > n-1) {
			cout << "NO";
			return 0;
		}
		a[sub-1]++;
		prev = current;
	}
	for (int val : a) {
		if (!val || val > 1) {
			flag = 0;
			break;
		}
		else flag = 1;
	}
	cout << (flag ? "YES" : "NO");
}