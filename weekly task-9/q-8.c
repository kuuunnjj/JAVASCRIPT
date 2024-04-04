#include <stdio.h>

#define ROWS 3
#define COLS 3

int sumArray(int arr[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    int sum = sumArray(arr);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
