// 38. Inversion Sequence
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, seq, cnt;
	cin >> n;
	vector<int> res(n, 101);
	
	for(int i = 1; i <= n; i++) {
		cnt = -1;
		cin >> seq;

		for (int j = 0; j < n; j++) {
			if (res[j] > i)cnt++;
			if (cnt == seq) {
				res[j] = i;
				break;
			}
		}
	}
	for (int val : res) cout << val << " ";
}