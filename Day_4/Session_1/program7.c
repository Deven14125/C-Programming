// Write a program to search a given element in an array (Linear Search).

#include<stdio.h>

void main()
{
	int n;
	printf("Enter number of elements in array: ");
	scanf("%d", &n);
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Array Elements : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	int target;
	int found = 0;
	printf("\nEnter Element you want to found :");
	scanf("%d",&target);
	
	for (int i = 0; i < n; i++)
	{
		if (target == arr[i])
		{
			found = 1;
			printf("Element Found at index %d",i);
			break;
		}
	}
	if (!found)
	{
		printf("Element not Exist in Array");
	}
	
}