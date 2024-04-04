#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input size of the array
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input array elements
    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Find the largest element
    int largest = arr[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    // Display the largest element
    printf("\nThe largest element is: %d\n", largest);

    return 0;
}
