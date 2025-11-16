// Write a program to find the factorial of a number.

#include <stdio.h>

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Factorial of %d is %d\n", n, factorial(n));
}