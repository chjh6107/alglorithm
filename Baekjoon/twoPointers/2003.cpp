// 수들의 합 2
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n, m, l = 0, r = 0, sum, cnt = 0;
	scanf("%d %d", &n, &m);
	vector<int> a(n);
	for (int i = 0; i < n; i++)scanf("%d", &a[i]);

	while (r<=n) {
		sum = 0;
		for (int i = l; i < r; i++)sum += a[i];
		if (m > sum)r++;
		else if (m < sum)l++;
		else {
			cnt++;
			l++;
			r++;
		}
	}
	printf("%d", cnt);
}