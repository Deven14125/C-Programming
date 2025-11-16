// Given two strings s1 and s2 consisting of lowercase characters, the task is to check whether the two given
// strings are anagrams of each other or not. An anagram of a string is another string that contains the same
// characters, only the order of characters can be different.
// Input: s1 = “geeks” s2 = “kseeg”
// Output: true
// Explanation: Both the strings have the same characters with same frequency. So, they are anagrams.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 26
bool areAnagrams(char s1[], char s2[]) {
	int count1[MAX] = {0};
	int count2[MAX] = {0};

	for (int i = 0; s1[i] != '\0'; i++) {
		count1[s1[i] - 'a']++;
	}

	for (int i = 0; s2[i] != '\0'; i++) {
		count2[s2[i] - 'a']++;
	}

	for (int i = 0; i < MAX; i++) {
		if (count1[i] != count2[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	char s1[100], s2[100];
	printf("Enter first string: ");
	scanf("%99s", s1);
	printf("Enter second string: ");
	scanf("%99s", s2);

	if (areAnagrams(s1, s2)) {
		printf("true\n");
	} else {
		printf("false\n");
	}
	return 0;
}
