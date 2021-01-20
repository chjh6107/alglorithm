// 28. N!에서 0의 개수
#include <cstdio>
using namespace std;

int main() {
	int n, j, tmp, cnt[2] = { 0, };
	scanf("%d", &n);
	
	for (int i = 2; i <= n; i++) {
		j = 2;
		tmp = i;
		while (1) {
			if (!(tmp % j)) {
				if (j == 2) cnt[0]++;
				else if (j == 5) cnt[1]++;
				tmp /= j;
			}
			else j++;

			if (tmp == 1)break;
		}
	}
	printf("%d", cnt[0]>cnt[1]?cnt[1]:cnt[0]);
}