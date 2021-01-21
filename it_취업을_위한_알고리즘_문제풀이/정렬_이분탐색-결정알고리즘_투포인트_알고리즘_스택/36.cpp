// 36. 삽입정렬
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, key, i, j;
	cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++)cin >> a[i];
	for (i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > key)a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = key;
	}
	for (int val : a) cout << val << " ";
	cout << "\n";

}