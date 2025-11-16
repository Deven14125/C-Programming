// WAP to find weather given number is Automorphic or not.
// An automorphic number is a number whose square ends with the same digits as the number itself.
// For example, 5 is automorphic because 5² = 25, which ends in 5.
// Similarly, 76 is automorphic because 76² = 5776, which ends in 76.

#include <stdio.h>

int main() {
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	int sq = n * n;

	int temp = n;

	int digit = 0;
	while (temp != 0)
	{
		temp /= 10;
		digit++;	
	}
	
	int result = sq % (int)(pow(10,digit));
	int isAutomorphic = (result == n) ? 1 : 0;

	if (isAutomorphic)
		printf("Given number %d is an Automorphic Number.\n", n);
	else
		printf("Given number %d is Not an Automorphic Number.\n", n);

	return 0;
}