// 39. 두 배열 합치기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, idxA = 0, idxB = 0;

	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
	scanf("%d", &m);
	vector<int> b(m);
	for (int i = 0; i < m; i++)scanf("%d", &b[i]);
	
	for (int i = 0; i < n + m; i++) {
		if(idxA<n&&idxB<m)
			printf("%d ", a[idxA] > b[idxB] ? b[idxB++] : a[idxA++]);
		else
			printf("%d ", idxA < n ? a[idxA++] : b[idxB++]);
	}
}