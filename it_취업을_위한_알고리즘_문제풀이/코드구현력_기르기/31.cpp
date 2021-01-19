// 31. 탄화수소 질량
#include <iostream>
#include <string>

using namespace std;

int main() {
	int res = 0;
	string str;
	cin >> str;

	str = str.substr(1);
	if (str.front() == 'H') res += 12;
	else res += 12 * stoi(str.substr(0, str.find('H')));

	str = str.substr(str.find('H'));

	if (str.back() == 'H') res++;
	else res += stoi(str.substr(1));

	cout << res;
}