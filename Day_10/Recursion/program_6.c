// Write a program to count the total number of digits in a given number.

#include <stdio.h>

int count_digits(int n)
{
	int count = 0;
	if (n == 0)
	{
		return count;
	}
	else
	{
		return 1 + count_digits(n / 10);
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("Total number of digits in %d is 1\n", n);
	}
	else
	{
		printf("Total number of digits in %d is %d\n", n, count_digits(n));
	}
	return 0;
}