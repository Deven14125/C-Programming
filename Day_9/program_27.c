// WAP for given N digits, arrange them to form the largest number divisible by 3.

#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number of digits: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d digits: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%1d", &arr[i]);
	}

	// Sort digits in descending order
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// Calculate sum of digits
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += arr[i];
	}

	// Check divisibility by 3
	if(sum % 3 != 0) {
		printf("Not possible to form a number divisible by 3.\n");
		return;
	}

	// Print the largest number
	printf("The largest number divisible by 3 is: ");
	for(int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}