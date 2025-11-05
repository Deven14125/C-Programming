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

	printf("Array Before Sorting: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	int isSort;
	for (int i = 0; i < n - 1; i++) {
		isSort = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				isSort = 1;
			}
		}
		if (!isSort)
			break; 
	}

	printf("\nArray After Sorting: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
