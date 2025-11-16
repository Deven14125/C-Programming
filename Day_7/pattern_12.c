#include<stdio.h>

void main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n - i; k++)
		{
			printf("  ");
		}
		
		int num = 1;
		for (int j = 1; j <=i; j++)
		{
			if (j % 2 == 0)
			{
				printf("* ");
			}
			else
			{
				printf("%d ", num);
				num += 2;
			}
		}
		if (i % 2 == 0)
		{
			num = num - 2;
		}
		else
		{
			num = num - 4;
		}
		for (int j = i + 1; j <= (2*i)-1; j++)
		{
			if (j % 2 == 0)
			{
				printf("* ");
			}
			else
			{
				printf("%d ", num);
				num -= 2;
			}
		}
		printf("\n");
	}
	
}