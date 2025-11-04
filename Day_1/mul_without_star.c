#include<stdio.h>
int main()
{
	int m,n,mul=0;
	printf("Enter two integers: ");
	scanf("%d %d",&m,&n);

	for(int i = 1;i<=n;i++)
	{
		mul = mul + m;
	}
	printf("Multiplication of %d without using * operator is %d",m,mul);
	return 0;
}