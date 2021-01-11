#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n = atoi(argv[1]);
	char comma = argc == 3 ? argv[2][0] : ' ';
	int arrSize = 1, carry = 0;
	int *number = (int *)malloc(sizeof(int)*arrSize);
	number[0] = 1; 

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < arrSize; j++) {
			if (!carry) number[j] *= 2;
			carry = 0;

			if (number[0] >= 1000) {
				carry = 1;
				number = (int *)realloc(number, sizeof(int)*++arrSize);
				number[arrSize - 1] = 0;

				for (int k = arrSize - 1; k > 0; k--)
					number[k] = number[k - 1];

				number[j + 1] = number[j] % 1000;
				number[j] /= 1000;
			}
			if (j && number[j] >= 1000) {
				number[j - 1] += number[j] / 1000;
				number[j] %= 1000;
			}
		}
	}
	for (int i = 0; i < arrSize; i++) {
		if (!i) printf("%d", number[i]);
		else printf("%c%03d", comma == '+' ? ',' : 0, number[i]);
	}
	printf("\n");
	free(number);
}