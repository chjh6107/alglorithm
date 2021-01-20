// 34. 버블정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = n; i >= 0; i--) {
		for (int j = 1; j < i; j++) {
			if (a[j-1] > a[j]) swap(a[j-1], a[j]);
		}
	}
	for (int val : a)cout << val << " ";
}