#include<stdio.h>
int main()
{
	int n, reversed = 0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	int num = n;
	while(n > 0)
	{
		int digit = n % 10;
		reversed = reversed * 10 + digit;
		n = n / 10;
	}
	printf("The Reverse of %d is %d ",num,reversed);
	
	return 0;
}