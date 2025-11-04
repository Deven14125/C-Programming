#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("Enter an Integer: ");
	scanf("%d", &n);

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

	printf("The Sum of Divisors of %d is => %d\n", n, sum);
	return 0;
}
