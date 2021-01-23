// 41. 연속된 자연수의 합
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, sum, cnt = 0;
	vector<int> arr;

	scanf("%d", &n);

	for (int i = n / 2; i > 0; i--) {
		sum = 0;
		for (int j = 0; sum < n; j++) {
			sum += i + j;
			arr.push_back(i+j);
			if (sum == n) {
				cnt++;
				for (int k = 0; k < arr.size(); k++) 
					printf("%d%s", arr[k], (k == arr.size() - 1) ? "" : " + ");
				printf(" = %d\n", sum);
				break;
			}
		}
		arr.clear();
	}
	printf("%d", cnt);
}