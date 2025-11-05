// Write a program to copy all elements from one array to another.

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

	printf("First Array Elements : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	int arr2[n];
	
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	
	printf("\nSecond Array Elements : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr2[i]);
	}
}