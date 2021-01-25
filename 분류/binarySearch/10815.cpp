// 숫자 카드
#include <cstdio>
#include <algorithm>
int n;

bool f(int *A, int k) {
	int l = 0, m, h=n-1;
	while (l<=h) {
		m = (l+h) / 2;
        if(k>A[m]) l=m+1;
        else if(k==A[m]) return 1;
        else h=m-1;
	}
    return 0;
}
int main() {
	int m, num;
	scanf("%d", &n);

	int *cards = new int[n];
	for (int i = 0; i < n; i++) scanf("%d", &cards[i]);
	std::sort(cards, cards + n);

	scanf("%d", &m);
	while (m--) {
		scanf("%d", &num);
        printf("%d ", f(cards,num));
	}
	delete cards;
}