// 30. 3의 개수는?(large)
#include <iostream>
using namespace std;

int main() {
	int n, lt = 1, cur, rt, cnt = 0, k = 1;
	cin >> n;

	while (lt){
		lt = n / (k * 10);
		cur = n % (k * 10) / k;
		rt = n % k;
		
		if (cur > 3) cnt += (lt + 1)*k;
		else if (cur == 3)cnt += lt*k + (rt + 1);
		else cnt += lt*k;

		k *= 10;
	}
	cout << cnt;
}