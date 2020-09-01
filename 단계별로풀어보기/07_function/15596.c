// 정수 N의 합: 정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
long long sum(int *a, int n) {
	long long ans = 0;
    for(int i=0; i<n; i++) ans += a[i];
	return ans;
}