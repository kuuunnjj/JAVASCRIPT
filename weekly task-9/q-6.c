#include <stdio.h>

int main() {
    // Initializing an array at the time of declaration
    int arr[] = {1, 2, 3, 4, 5};

    // Calculating the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing the array elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
