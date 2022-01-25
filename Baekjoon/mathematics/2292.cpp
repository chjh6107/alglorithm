// 벌집
#include <cstdio>

int main() {
	int n, cnt = 1, mul = 6, l = 0, r=0;
	scanf("%d", &n);

	for (int i = 0;; i++) {
		r += mul*i;
		if (l <= n&&n <= r+1)break;
		else {
			cnt++;
			l = r+1;
		}
	}
	printf("%d", cnt);
}