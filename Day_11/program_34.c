// Given an array of positive integers arr[] of size n, the task is to find the second largest distinct element in
// the array.
// Note: If the second largest element does not exist, return -1.
// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 there is no second largest element.

#include <stdio.h>
#define MAX_SIZE 100
int findSecondLargest(int arr[], int n) {
	int first = -1, second = -1;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] > first) {
			second = first;
			first = arr[i];
		} else if (arr[i] > second && arr[i] != first) {
			second = arr[i];
		}
	}
	return second;
}
int main() {
	int arr[MAX_SIZE], n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	printf("Enter the elements of the array: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int result = findSecondLargest(arr, n);
	if (result != -1) {
		printf("The second largest distinct element is: %d\n", result);
	} else {
		printf("There is no second largest distinct element.\n");
	}
	return 0;
}