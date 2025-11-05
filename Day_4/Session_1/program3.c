// Write a program to find the maximum and minimum elements in an array.

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
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("\nMaximum Element: %d", max);
	printf("\nMinimum Element: %d", min);
}
