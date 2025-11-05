#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int position;
    printf("\nEnter the position of element to delete (1 to %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Invalid position!");
        return;
    }

    for(int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray After Deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
