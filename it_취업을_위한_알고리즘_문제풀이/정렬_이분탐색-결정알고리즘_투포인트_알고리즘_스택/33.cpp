// 33. 3등의 성적은?
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, cnt = 0, res;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] < arr[j])swap(arr[i], arr[j]);

	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] != arr[i])cnt++;
		if (cnt == 2) {
			cout << arr[i];
			break;
		}
	}
	
}