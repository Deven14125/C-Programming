// Write a program to find the sum of first N natural numbers.

#include <stdio.h>

int sum_of_number(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + sum_of_number(n - 1);
	}
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum of first %d natural numbers is %d\n", n, sum_of_number(n));
}