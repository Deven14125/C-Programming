#include<stdio.h>
int main()
{
	int n,answer = 0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	int num = n;
	while(n > 0)
	{
		int num = n % 10;
		answer = answer + num;
		n = n / 10;
	}
	printf("The Sum of %d Digit is %d ",num,answer);
	
	return 0;
}