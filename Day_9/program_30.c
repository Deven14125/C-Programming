// WAP to check whether number is present in array or not (using recursion only) and the function’s syntax
// is given below
// int isInArray(int a [], int m); Where int a [] is Array of integer and m is element to be searched

#include <stdio.h>

//do not pass size in the function
int isInArray(int a[], int m) {
	//base case
	if (a[0] == m) {
		return 1; 
	}
	if (a[0] == -1) {
		return 0; 
	}
	
	return isInArray(a + 1, m);
}
int main() {
	int arr[100], n, m;

	printf("Enter number of elements in array: ");
	scanf("%d", &n);

	printf("Enter %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//mark the end of the array
	arr[n] = -1;

	printf("Enter element to be searched: ");
	scanf("%d", &m);

	if (isInArray(arr, m)) {
		printf("Element %d is present in the array.\n", m);
	} else {
		printf("Element %d is not present in the array.\n", m);
	}

	return 0;
}