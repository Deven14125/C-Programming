// Given a string S of length n, the task is to find the earliest repeated character in it. The earliest repeated
// character means, the character that occurs more than once and whose second occurrence has the
// smallest index.
// Input: s = "geeksforgeeks"
// Output: e
// Explanation: e is the first element that repeats

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char s[20];
	printf("Enter the string: ");
    scanf("%19s", s);
	
    int firstIndex[256];
    for (int i = 0; i < 256; i++)
        firstIndex[i] = -1;

    int minSecondPos = INT_MAX;
    char answer = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (firstIndex[c] == -1) {
            firstIndex[c] = i;
        } else {
            if (i < minSecondPos) {
                minSecondPos = i;
                answer = s[i];
            }
        }
    }

    if (minSecondPos == INT_MAX)
        printf("No repeated character\n");
    else
        printf("%c\n", answer);

    return 0;
}
