// 약수
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 0; i < n; i++)	scanf("%d", &a[i]);
	sort(a.begin(), a.end());
	printf("%d", a.back()*a.front());
}