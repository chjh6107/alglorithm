// 27. N!의 표현법
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n, tmp;
	scanf("%d", &n);
	vector<int> check(n + 1);

	for (int i = 2; i <= n; i++) {
		tmp = i;
		int j = 2;
		while (1) {
			if (!(tmp%j)) {
				check[j]++;
				tmp /= j;
			}
			else j++;

			if (tmp == 1) break;
		}
	}
	printf("%d! = ", n);
	for (int i : check) if (i) printf("%d ", i);
}