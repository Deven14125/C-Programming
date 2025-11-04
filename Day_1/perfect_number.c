#include<stdio.h>
int main()
{
	int n, sum = 0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	int num = n;
	
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
			if (i != n / i)
			{
				sum += n / i;
			}
		}
	}
	if (sum - num == num)
	{
		printf("%d is a perfect number.\n", num);
	}
	else
	{
		printf("%d is not a perfect number.\n", num);
	}
}