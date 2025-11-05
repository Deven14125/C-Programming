// Write a program to find the sum and average of elements in an array.

#include <stdio.h>

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
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	float average = (float)sum / n;
	printf("\nSum: %d", sum);
	printf("\nAverage: %.2f", average);
}