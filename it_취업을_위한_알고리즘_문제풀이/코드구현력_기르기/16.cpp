// 16. Anagram(아나그램 : 구글 인터뷰 문제)
#include <iostream>
#include <string>
using namespace std;

int main() {
	int A[123] = { 0, }, B[123] = { 0, };
	string a, b;
	cin >> a;
	cin >> b;

	for (char ch : a) A[ch]++;
	for (char ch : b) B[ch]++;
	for (int i = 0; i < 123; i++) {
		if (A[i] != B[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}