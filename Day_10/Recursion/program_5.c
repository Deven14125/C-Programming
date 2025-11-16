// Write a program to find the power of a number (x^y) without using library functions.

#include <stdio.h>
int power(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}
	else
	{
		return x * power(x, y - 1);
	}
}
int main()
{
	int base,exponent;
	printf("Enter a base : ");
	scanf("%d",&base);
	
	printf("Enter a exponent : ");
	scanf("%d",&exponent);
	
	int pow = power(base,exponent);
	printf("The Power of %d ^ %d is %d",base,exponent,pow);
	return 0;
}4