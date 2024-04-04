#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int arr[ROWS][COLS], int result[COLS][ROWS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[j][i] = arr[i][j];
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int result[COLS][ROWS];

    transpose(arr, result);

    printf("Transpose of the array:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
