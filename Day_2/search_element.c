#include<stdio.h>
int main()

{
	int n,element,found=0;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements of array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element to be searched: ");
	scanf("%d",&element);
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			found = 1;
			break;
		}
	}
	if(found)
	{
		printf("Element %d is found in the array.",element);
	}
	else
	{
		printf("Element %d is not found in the array.",element);
	}
	return 0;
}