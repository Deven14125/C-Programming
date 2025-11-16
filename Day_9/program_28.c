// Write a program that should decode the given pattern and print the resulting expanded string.
// Input: 2a3bc4dE5F2G7H
// Output: aabbbcddddEFFFFFGGHHHHHHH

#include<stdio.h>

void main()
{
	char str[100];
	printf("Enter the encoded string: ");
	scanf("%s", str);

	char result[500]; // To store the expanded string
	int index = 0; // Index for result array

	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] >= '0' && str[i] <= '9') {
			int count = str[i] - '0'; // Convert char to int
			char ch = str[i + 1]; // Next character to be repeated
			for(int j = 0; j < count; j++) {
				result[index++] = ch; // Append character count times
			}
			i++; // Skip the next character as it's already processed
		} else {
			result[index++] = str[i]; // Just append the character
		}
	}
	result[index] = '\0'; // Null-terminate the result string

	printf("Expanded string: %s\n", result);
}