#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    int i, j, k;

    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n;) {
            if (arr[i] == arr[j]) {
                for (k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--; 
            } else {
                j++;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, &n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
