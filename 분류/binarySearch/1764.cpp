// 듣보잡
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int n, m;
	string s;
	cin >> n >> m;
	vector<string> str(n), res;
	for (int i = 0; i<n; i++) cin >> str[i];
	sort(str.begin(), str.end());

	for (int i = 0; i<m; i++) {
		cin >> s;
		if (binary_search(str.begin(), str.end(), s)) {
			res.push_back(s);
		}
	}
    sort(res.begin(),res.end());
	cout << res.size() << "\n";
	for (int i = 0; i < res.size();i++)cout << res[i] << "\n";
}