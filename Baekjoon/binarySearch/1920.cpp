// 수 찾기
#include <cstdio>
#include <algorithm>
using namespace std;

int a[100000]; //벡터가 많이 느려서 배열로 사용

void f(int n, int x) {
	int l = 0, m, r = n-1;
	while (l <= r) {
		m = (l + r) / 2;
		if (x < a[m]) r = m - 1;
		else if (x > a[m]) l = m + 1;
		else {
			printf("1\n");
			return;
		}
	}
	printf("0\n");
}

int main() {
	int n, m, x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a+n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &x);
		f(n, x);
	}
}