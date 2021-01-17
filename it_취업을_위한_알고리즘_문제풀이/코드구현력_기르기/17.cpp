// 17. 선생님 퀴즈
#include <iostream>
using namespace std;

int main() {
	int n, q, a, acc;
	cin >> n;
	while (n--) {
		acc = 0;
		cin >> q;
		cin >> a;
		for (int i = 1; i <= q; i++) acc += i;
		cout << (acc == a ? "YES\n" : "NO\n");
	}
}