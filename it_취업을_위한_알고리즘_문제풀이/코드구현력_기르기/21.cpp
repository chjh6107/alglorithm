// 21. 카드게임
#include <iostream>
using namespace std;

int main() {
	int n = 10, a[10], b[10], scr[2] = { 0, }, lastWin = -1;
	
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	for (int i = 0; i < n; i++) {
		if (a[i] > b[i]) {
			scr[0] += 3;
			lastWin = 1;
		}
		else if (a[i] < b[i]) {
			scr[1] += 3;
			lastWin = 0;
		}
		else {
			scr[0]++;
			scr[1]++;
		}
	}
	printf("%d %d\n", scr[0], scr[1]);
	printf("%c", scr[0] > scr[1] ? 'A' : scr[0] < scr[1] ? 'B' : lastWin == 1 ? 'A' : !lastWin ? 'B' : 'D');
}