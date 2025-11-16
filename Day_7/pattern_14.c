// Implement a following pattern
//  1
//  212
//  32123
// 4321234
//  32123
//  212
//  1

#include <stdio.h>
void main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);

	// Upper half
	for (int i = 1; i <= n; i++)
	{
		// Print leading spaces
		for (int space = 1; space <= n - i; space++)
		{
			printf(" ");
		}

		// Print decreasing numbers
		for (int j = i; j >= 1; j--)
		{
			printf("%d", j);
		}

		// Print increasing numbers
		for (int j = 2; j <= i; j++)
		{
			printf("%d", j);
		}

		printf("\n");
	}

	// Lower half
	for (int i = n - 1; i >= 1; i--)
	{
		// Print leading spaces
		for (int space = 1; space <= n - i; space++)
		{
			printf(" ");
		}

		// Print decreasing numbers
		for (int j = i; j >= 1; j--)
		{
			printf("%d", j);
		}

		// Print increasing numbers
		for (int j = 2; j <= i; j++)
		{
			printf("%d", j);
		}

		printf("\n");
	}
}
