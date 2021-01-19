// 23. 연속 부분 증가수열
#include <cstdio>

int main() {
	int n, current, prev = 0, len = 0, maxLen = 0;
	scanf("%d", &n);

	while (n--) {
		scanf("%d", &current);
		if (current >= prev) len++;
		else len = 1;
		prev = current;
		maxLen = len > maxLen ? len : maxLen;
	}
	printf("%d\n", maxLen);
}