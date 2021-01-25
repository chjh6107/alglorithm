// 44. 마구간 정하기(이분검색 응용)
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int Count(int len, vector<int> x) {
	int cnt = 1,pos=x.front();
	for (int i = 1; i < n; i++) {
		if (x[i] - pos >= len) {
			cnt++;
			pos = x[i];
		}
	}
	return cnt;
}
int main() {
	int c, l = 1, m, r, res;
	scanf("%d %d", &n, &c);
	vector<int> x(n);
	for (int i = 0; i < n; i++) scanf("%d", &x[i]);
	sort(x.begin(), x.end());
	r = x.back();
	while (l <= r) {
		m = (l + r) / 2;
		if (Count(m, x) >= c) {
			res = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	printf("%d", res);
}