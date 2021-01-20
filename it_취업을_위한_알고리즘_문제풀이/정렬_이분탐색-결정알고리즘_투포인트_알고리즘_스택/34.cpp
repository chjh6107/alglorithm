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

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1 ; j++) {
			if (a[j] > a[j+1]) swap(a[j], a[j+1]);
		}
	}
	for (int val : a)cout << val << " ";
}