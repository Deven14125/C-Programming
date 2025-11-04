#include<stdio.h>
int main()
{
	int n,smallest;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements of array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	smallest = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<smallest)
		{
			smallest = arr[i];
		}
	}
	printf("Smallest element in the array is: %d",smallest);
	return 0;
}