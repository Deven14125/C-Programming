#include<stdio.h>
int main()
{
	int n, sum = 0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	for(int i = 0;i<=n;i++)
	{
		sum = sum + (i*i);
	}
	printf("Sum of series of squares from 1 to %d is %d",n,sum);
	return 0;
}