#include <stdio.h>

void findFrequency(int arr[], int n) {
    int i, j, count;
    for (i = 0; i < n; i++) {
        count = 1;
        if (arr[i] != -1) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark the element as visited
                }
            }
            printf("Frequency of %d = %d\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Output:\n");
    findFrequency(arr, n);

    return 0;
}
