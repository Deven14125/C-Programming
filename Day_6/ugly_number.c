// WAP to find weather given number is Ugly or not.
// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
// Input: n = 6 Output: true Explanation: 6 = 2 × 3

#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num <= 0) 
	{
		printf("%d is not an Ugly Number.\n", num);
	}
	while (num % 2 == 0)
	{
		num /= 2;
	}
	while (num % 3 == 0)
	{
		num /= 3;
	}
	while (num % 5 == 0)
	{
		num /= 5;
	}
	
	if (num == 1) {
		printf("%d is an Ugly Number.\n", num);
	} else {
		printf("%d is not an Ugly Number.\n", num);
	}
	return 0;
}