// Write a program to reverse a given number and check whether it is a palindrome.

#include <stdio.h>

int isPalindrome(int n)
{
	static int rev = 0;
	if (n == 0)
	{
		return rev;
	}
	else
	{
		rev = rev * 10 + (n % 10);
		return isPalindrome(n / 10);
	}
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int reverse = isPalindrome(n);
	
	if (n == reverse)
	{
		printf("%d is a palindrome number\n", n);
	}
	else
	{
		printf("%d is not a palindrome number\n", n);
	}
	return 0;
}