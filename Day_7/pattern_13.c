// Implement a following pattern
// * * * * * * *
//  *        *
//    *    *
//       *
//    *    *
//  * 		 *
// * * * * * * *

#include <stdio.h>

void main()
{
	int n;
	printf("Enter a  Number : ");
	scanf("%d",&n);
	
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{	
			if(i==1 || i==n || i==j || (i+j)%2 == 0)
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}

