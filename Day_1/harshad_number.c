#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter an Integer: ");
	scanf("%d",&n);
	
	int num = n;
	
	while (n > 0)
	{
		int rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	
	if(num % sum == 0)
	{
		printf("The Given Number %d is a Harshad Number",num);
	}
	else
	{
		printf("The Given Number %d is Not a Harshad Number",num);
	}
	return 0;
}