// 35. Special Sort(구글 인터뷰)
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
		if (a[i] < 0) {
			for (int j = i; j > 0; j--) {
				if (a[j - 1] < 0)break;
				swap(a[j], a[j - 1]);
			}
		}
	}
	for (int val : a)cout << val << " ";
}