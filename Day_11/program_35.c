// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying
// at most one element.
// Input: nums = [4,2,3]
// Output: true
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array.

#include <stdio.h>
#include <stdbool.h>

bool checkPossibility(int nums[], int n) {
    int count = 0;  // number of modifications needed

    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {   // violation found
            count++;

            if (count > 1)
                return false;

            // Fix the smaller value based on surrounding numbers
            if (i == 1 || nums[i] >= nums[i - 2]) {
                nums[i - 1] = nums[i];   // modify nums[i-1]
            } else {
                nums[i] = nums[i - 1];   // modify nums[i]
            }
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (checkPossibility(nums, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
