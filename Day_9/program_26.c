// Find the difference between the second largest element and the second smallest element of an array.
// Input : Enter the size of array: 7
//  Enter 7 elements: 5 1 9 7 1 5 3
// Output: Difference: 4

#include<stdio.h>

void main()
{
		int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	// Initialize first and second largest and smallest
	int firstLargest = -2147483648, secondLargest = -2147483648;
	int firstSmallest = 2147483647, secondSmallest = 2147483647;

	for(int i = 0; i < n; i++) {
		// Update largest and second largest
		if(arr[i] > firstLargest) {
			secondLargest = firstLargest;
			firstLargest = arr[i];
		} else if(arr[i] > secondLargest && arr[i] != firstLargest) {
			secondLargest = arr[i];
		}

		// Update smallest and second smallest
		if(arr[i] < firstSmallest) {
			secondSmallest = firstSmallest;
			firstSmallest = arr[i];
		} else if(arr[i] < secondSmallest && arr[i] != firstSmallest) {
			secondSmallest = arr[i];
		}
	}

	if(secondLargest == -2147483648 || secondSmallest == 2147483647) {
		printf("Not enough distinct elements to find second largest or second smallest.\n");
	} else {
		int difference = secondLargest - secondSmallest;
		printf("Difference: %d\n", difference);
	}	
}