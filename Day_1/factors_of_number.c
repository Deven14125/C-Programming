#include<stdio.h>
int main()
{
	int n;
	printf("Enter an Integer :");
	scanf("%d",&n);
	
	printf("The Factors of Given %d is => ",n);
	for(int i = 1;i<=n;i++)
	{
		if(n % i == 0)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}