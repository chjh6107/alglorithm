// 18. 층간소음
#include <iostream>
using namespace std;

int main() {
	int n, m, measure, cnt = 0, max = -1;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> measure;
		if (measure > m) max = ++cnt>max ? cnt : max;
		else cnt = 0;
	}
	cout << max;
}