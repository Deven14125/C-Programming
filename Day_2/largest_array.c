#include<stdio.h>
int main()
{
	int n,largest;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements of array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	largest = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
	}
	printf("Largest element in the array is: %d",largest);
	return 0;
}