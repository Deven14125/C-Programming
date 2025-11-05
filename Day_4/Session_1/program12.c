#include <stdio.h>

void main()
{
    int n1, n2;

    printf("Enter Size of First array: ");
    scanf("%d", &n1);

    printf("Enter Size of Second array: ");
    scanf("%d", &n2);

    int arr[n1], arr2[n2];

    printf("\nEnter First Array Elements:\n");
    for (int i = 0; i < n1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter Second Array Elements:\n");
    for (int i = 0; i < n2; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr3[n1 + n2];

    for (int i = 0; i < n1; i++) {
        arr3[i] = arr[i];
    }

    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("\nMerged Array Elements: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
}
