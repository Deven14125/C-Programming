// WAP to find weather given number is Pronic or not.
// A Pronic Number is defined as a number that is the product of two consecutive non-negative integers. In
// other words, N is a Pronic Number if there exists a non-negative integer k such that N = k * (k + 1).
// E.g. 6 is a Pronic Number because 6=2*3

#include <stdio.h>

int main() {
	int n, i;
	int isPronic = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		if (i * (i + 1) == n) {
			isPronic = 1;
			break;
		}
	}

	if (isPronic) {
		printf("Given number %d is a Pronic Number.\n", n);
	} else {
		printf("Given number %d is Not a Pronic Number.\n", n);
	}

	return 0;
}