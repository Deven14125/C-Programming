#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int position, element;
    printf("\nEnter position where you want to insert element (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!");
        return;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    printf("\nArray After Insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
