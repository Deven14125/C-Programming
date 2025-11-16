// WAP for following Scenario.
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees. 

#include<stdio.h>

void main()
{
	int n, m, k;
	printf("Enter the amount you have (n): ");
	scanf("%d", &n);
	printf("Enter the price of each chocolate (m): ");
	scanf("%d", &m);
	printf("Enter the number of wrappers needed for exchange (k): ");
	scanf("%d", &k);

	int chocolates = n / m; // Initial chocolates bought
	int wrappers = chocolates; // Initial wrappers from bought chocolates

	// Exchange wrappers for more chocolates
	while (wrappers >= k) {
		int additionalChocolates = wrappers / k;
		chocolates += additionalChocolates;
		wrappers = (wrappers % k) + additionalChocolates; // Update wrappers
	}

	printf("Total chocolates you can eat: %d\n", chocolates);
}