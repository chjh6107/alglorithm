// 22. 온도의 최대값
#include <cstdio>
#include <vector>

int main() {
	int n, k, max = -99999, sum = 0;

	scanf("%d %d", &n, &k);
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < k; i++) sum += a[i];

	max = sum > max ? sum : max;
	for (int i = k; i < n; i++) {
		sum += a[i] - a[i-k];
		max = sum > max ? sum : max;
	}
	printf("%d", max);
}