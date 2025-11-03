#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter First integer: ");
	scanf("%d",&n1);
	
	printf("Enter Second integer: ");
	scanf("%d",&n2);
	
	printf("Numbers Divisible By 2 Between %d and %d is => ",n1,n2);
	for(int i = n1;i<=n2;i++)
	{
		if(i % 2 == 0)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}