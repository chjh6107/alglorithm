// 43. 뮤직비디오(이분검색 활용)
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, cnt, left = 1, mid, sum, right = 0, res;
	scanf("%d %d", &n, &m);
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		right += a[i];
	}
	mid = (left + right) / 2;

	while (left <= right) {
		sum = 0;
		cnt = 1;
		mid = (left + right) / 2;

		for (int i = n - 1; i >= 0; --i) {
			sum += a[i];
			if (sum > mid) {
				cnt++;
				sum = 0;
				i++;
			}
		}
		if (cnt <= m) {
			res = mid;
			right = mid - 1;
		}
		else if (cnt > m) left = mid + 1;
	}
	printf("%d", res);
}