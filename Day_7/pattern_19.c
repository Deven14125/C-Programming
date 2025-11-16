// Write a program to print following pattern
// For n=5
// 1  2  3  4  5
// 10 9  8  7  6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25

#include<stdio.h>

void main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	int num = 1;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			if (i % 2 != 0)
			{
				printf("%d  ", num);
				num++;
			}
			else
			{
				printf("%d  ", num + n - j);
				if (j == n)
				{
					num = num + n;
				}
			}
			printf(" ");
		}
		printf("\n");
	}
}