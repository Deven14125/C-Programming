// Write a program to check whether number is Happy number or not.
// A happy number are those number whose digit’s square summation eventually reaches to 1, if the
// sequence start repeating then it is not a happy number.
// E.g., 49 is a happy number whose sequence is 49 97 130 10 1.
// E.g., 50 is not a happy number whose sequence is 50 25 29 85 89 145 42 20 4 16 37 58 89 it should stop
// when 89 is detected 2nd time and print 50 is not a happy number.

#include <stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int slow = n, fast = n;

	do {
		// Move slow by one step
		int sum = 0;
		while (slow) {
			int digit = slow % 10;
			sum += digit * digit;
			slow /= 10;
		}
		slow = sum;

		// Move fast by two steps
		for (int i = 0; i < 2; i++) {
			sum = 0;
			while (fast) {
				int digit = fast % 10;
				sum += digit * digit;
				fast /= 10;
			}
			fast = sum;
		}
	} while (slow != fast);

	if (slow == 1) {
		printf("Given number %d is a Happy Number.\n", n);
	} else {
		printf("Given number %d is Not a Happy Number.\n", n);
	}

	return 0;
}