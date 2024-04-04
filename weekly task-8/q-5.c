#include <stdio.h>

int main() {
    int rows, cols, i, j, row_num, col_num;

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

    // Display the array
    printf("\nThe array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Input row number
    printf("\nEnter row number: ");
    scanf("%d", &row_num);

    // Display elements of the row
    printf("Elements of row %d: ", row_num);
    for (j = 0; j < cols; j++) {
        printf("%d", arr[row_num][j]);
        if (j != cols - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Calculate sum of elements in the row
    int row_sum = 0;
    for (j = 0; j < cols; j++) {
        row_sum += arr[row_num][j];
    }
    printf("The sum of row %d: %d\n", row_num, row_sum);

    // Input column number
    printf("\nEnter column number: ");
    scanf("%d", &col_num);

    // Display elements of the column
    printf("Elements of column %d: ", col_num);
    for (i = 0; i < rows; i++) {
        printf("%d", arr[i][col_num]);
        if (i != rows - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Calculate sum of elements in the column
    int col_sum = 0;
    for (i = 0; i < rows; i++) {
        col_sum += arr[i][col_num];
    }
    printf("The sum of column %d: %d\n", col_num, col_sum);

    return 0;
}
