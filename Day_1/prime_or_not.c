#include<stdio.h>

// Time Complexity: O(√n)

int main()
{
	int n;
	printf("Enter an Integer :");
	scanf("%d",&n);
	
	for(int i = 2;i*i <= n;i++)
	{
		if(n % i == 0)
		{
			printf("%d is not a prime number.\n",n);
			return 0;
		}
	}
	printf("%d is a prime number.\n",n);
	return 0;
}