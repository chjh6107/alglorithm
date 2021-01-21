// 37. Least Recently Used(카카오 캐시 문제 변형)
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int s, n, num, getIdx, flag = 0;
	cin >> s >> n;
	vector<int> a(s);

	for (int i = 0; i < n; i++) { 
		cin >> num;
		
		for (int j = 0; j < s; j++) {
			if (a[j] == num) {
				getIdx = j;
				flag = 1;
				break;
			}
		}

		if (flag) for (int j = getIdx; j > 0; j--) swap(a[j], a[j - 1]);
		else {
			for (int j = s - 1; j > 0; j--) a[j] = a[j - 1];
			a[0] = num;
		}
		flag = 0;
	}
	for (int val : a)cout << val << " ";
}