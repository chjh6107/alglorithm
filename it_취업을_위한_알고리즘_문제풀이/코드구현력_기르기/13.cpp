// 13. 가장 많이 사용된 자릿수
#include <iostream>
#include <string>
using namespace std;

int main() {
	string num;
	int arr[10] = { 0, }, max = -1, res;
	cin >> num;
	for (int n : num) arr[n - '0']++;

	for (int i = 9; i >= 0;--i) {
		if (max == arr[i]) continue;
		if (max < arr[i]) {
			max = arr[i];
			res = i;
		}
	}
	cout << res;
}