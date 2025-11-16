// Given an integer n, return the least number of perfect square numbers that sum to n.
// Input: n = 12 Output: 3 Explanation: 12 = 4 + 4 + 4.
// Input: n = 13 Output: 2 Explanation: 13 = 4 + 9.

#include<stdio.h>

void main()
{
	int n;
	printf("Enter a positive integer n: ");
	scanf("%d", &n);

	int dp[n + 1];
	dp[0] = 0; // Base case

	for(int i = 1; i <= n; i++) {
		dp[i] = i; // Maximum squares required is i (1^2 + 1^2 + ...)

		for(int j = 1; j * j <= i; j++) {
			int square = j * j;
			if(square <= i) {
				if(dp[i] > dp[i - square] + 1) {
					dp[i] = dp[i - square] + 1;
				}
			}
		}
	}

	printf("Least number of perfect square numbers that sum to %d is: %d\n", n, dp[n]);
}