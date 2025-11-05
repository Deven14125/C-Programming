// Write a program to count total even and odd numbers in an array.

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
	
	int oddCount = 0;
	int evenCount = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenCount++;
		}
		else
		{
			oddCount++;
		}
	}
	
	printf("\nEven Numbers in Array = %d",evenCount);
	printf("\nOdd Numbers in Array = %d",oddCount);
}