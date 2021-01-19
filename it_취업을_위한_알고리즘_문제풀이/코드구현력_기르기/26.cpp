// 26. 마라톤
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, rank, cur = -1;
	cin >> n;
	vector<int> a(n);

	while(n--) {
		cur++;
		rank = 1;
		cin >> a[cur];
		if (!cur) {
			cout << rank << " ";
			continue;
		}
		for (int i = 0; i < cur; i++) {
			if (a[cur]<=a[i]) rank++;
		}
		cout << rank << " ";
	}
}