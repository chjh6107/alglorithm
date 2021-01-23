// 42. 이분검색
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m, res, l, mid, r;
	scanf("%d %d", &n, &m);
	vector<int> arr(n);

	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	sort(arr.begin(), arr.end());

	l = 0;
	r = n - 1;
	mid = (l + r) / 2;

	while (1) {
		mid = (l + r) / 2;
		if (arr[mid] == m) {
			printf("%d", ++mid);
			break;
		}
		else if (arr[mid] > m) r = mid - 1;
		else l = mid + 1;
	}
}