#include <stdio.h>

int main() {
    int size, i, j;

    // Input size of the array
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int arr[size][size];

    // Input array elements
    printf("\nEnter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the original array
    printf("\nThe original array:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Find the transpose matrix
    printf("\nThe transpose matrix of an array:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
