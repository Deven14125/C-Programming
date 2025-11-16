// Write a program to find the sum of digits of a given number.

#include <stdio.h>

int sum_of_digits(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n % 10) + sum_of_digits(n / 10);
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of digits of %d is %d\n", n, sum_of_digits(n));
	return 0;
}