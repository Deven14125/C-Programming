#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter First integer: ");
	scanf("%d",&n1);
	
	printf("Enter Second integer: ");
	scanf("%d",&n2);
	
	int a = n1;
	int b = n2;
	
	while(b != 0)
	{
		int rem = a % b;
		a = b;
		b = rem;
	}
	printf("The GCD of %d and %d is => %d\n",n1,n2,a);
	return 0;
}