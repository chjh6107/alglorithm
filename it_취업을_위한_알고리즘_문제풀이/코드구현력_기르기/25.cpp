// 25. 석차 구하기
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, rank;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++) {
		rank = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (a[i] < a[j]) rank++;
		}
		cout << rank << " ";
	}
}