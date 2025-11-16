// Implement a following pattern
// 1
// 1 2 1
// 1 * 3 * 1
// 1 * * 4 * * 1
// 1 * * * 5 * * * 1
// 1 * * * * 6 * * * *1

#include <stdio.h>

void main()
{
	int n;
	printf("Enter a  Number : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			if (j == 1 || j == (2 * i) - 1)
			{
				printf("1 ");
			}
			else if (i == j)
			{
				printf("%d ", i);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}