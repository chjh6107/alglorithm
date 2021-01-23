// 40. 교집합(투포인터 알고리즘)
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m, pa = 0, pb = 0;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
	sort(a.begin(), a.end());

	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++)scanf("%d", &b[i]);
	sort(b.begin(), b.end());

	while (pa < n&&pb < m) {
		if(a[pa] > b[pb])pb++;
		else if(a[pa] < b[pb])pa++;
		else {
			printf("%d ", a[pa]);
			pa++;
			pb++;
		}
	}
}