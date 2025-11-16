// WAP to find weather given number is Kaprekar or not.
// A Kaprekar number is a non-negative integer that, when squared, can be split into two parts whose sum
// equals the original number.
// For E.g. 45 is a Kaprekar number because 45 squared (2025) can be split into 20 and 25, and 20 + 25 = 45.

#include <stdio.h>

int main() {
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("Given number %d is a Kaprekar Number.\n", n);
		return 0;
	}

	int sq = n * n;
	int digits = 0;
	int temp = sq;

	while (temp != 0) {
		temp /= 10;
		digits++;
	}

	int isKaprekar = 0;

	for (int i = 1; i < digits; i++) {
		int pow10 = (int)pow(10, i);
		int right = sq % pow10;
		int left = sq / pow10;

		if (right > 0 && (left + right == n)) {
			isKaprekar = 1;
			break;
		}
	}

	if (isKaprekar)
		printf("Given number %d is a Kaprekar Number.\n", n);
	else
		printf("Given number %d is Not a Kaprekar Number.\n", n);

	return 0;
}