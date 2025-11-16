// Implement a following pattern
// For n=4
// 1
// 2 5
// 3 6 8
// 4 7 9 10

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int num = i;
		int diff = n - 1;

		for (int j = 1; j <= i; j++)
		{
			printf("%d ", num);
			num = num + diff;
			diff--;
		}
		printf("\n");
	}

	return 0;
}
