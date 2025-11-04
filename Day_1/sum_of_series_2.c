#include<stdio.h>
int main()
{
	int n,sum = 0;
	printf("Enter an Integer: ");
	scanf("%d",&n);
	
	for (int i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			sum -= i;
		}
		else
		{
			sum += i;
		}
	}
	printf("The Sum of Series is => %d\n",sum);
	return 0;
}