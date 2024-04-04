#include <stdio.h>

int main() {
    int size, i;

    // Input size of the array
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Display negative elements
    printf("\nNegative elements from an Array: ");
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d", arr[i]);
            if (i != size - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}
