// 나무 자르기
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	long long n, m, left = 0, mid, right = -2000000000, acc, res = 0;
	scanf("%lld %lld", &n, &m);
	vector<long long> a(n);

	for (int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
		right = a[i]>right?a[i] : right;
	}

	while (left <= right) {
		acc = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < n; i++)
			if (a[i] > mid) acc += a[i] - mid;

		if (acc >= m) {
			if (res < mid)res = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	printf("%lld", res);
}