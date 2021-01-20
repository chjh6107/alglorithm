// 19. 분노 유발자
#include <iostream>
using namespace std;

int main() {
	int n, arr[100] = { 0, }, cnt = 0, flag;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n - 1; i++) {
		flag = 0;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] <= arr[j]) {
				flag = 1;
				break;
			}
		}
		if (!flag)cnt++;
	}
	cout << cnt;
}