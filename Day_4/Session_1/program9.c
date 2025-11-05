// Write a program to find the second largest and second smallest elements in an array.

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
	
	
}