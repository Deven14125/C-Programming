// Write a Function that returns either 1 or 0 based on following condition if the array is in ascending order
// and occurrence of that number at least 3 then it should return 1 otherwise it should return 0.
// e.g. if A=[1,1,1,2,2] it should return 0, if A= [1,1,1,3,3,3,3] it should return 1.

#include <stdio.h>
#define MAX_SIZE 100
int checkArray(int arr[], int n) {
	int count = 1; // To count occurrences of the current number

	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			return 0; // Array is not in ascending order
		}
		if (arr[i] == arr[i - 1]) {
			count++;
		} else {
			if (count >= 3) {
				return 1; // Found a number with at least 3 occurrences
			}
			count = 1; // Reset count for the new number
		}
	}
	// Check for the last number in the array
	if (count >= 3) {
		return 1;
	}
	return 0;
}
int main() {
	int arr[MAX_SIZE], n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	printf("Enter the elements of the array: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int result = checkArray(arr, n);
	printf("%d\n", result);
	
	return 0;
}
