#include<stdio.h>
int main()
{
	int exponent,power=1,base;
	printf("Enter base and exponent: ");
	scanf("%d %d",&base,&exponent);
	
	for(int i = 1;i<=exponent;i++)
	{
		power = power * base;
	}
	printf("%d raised to the power %d is %d",base,exponent,power);
	return 0;
}