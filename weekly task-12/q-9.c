#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 

    int arr2[] = {5, 4, 3, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 

    if (isSorted(arr1, n1)) {
        printf("arr1[] is sorted in ascending order.\n");
    } else {
        printf("arr1[] is not sorted in ascending order.\n");
    }

    if (isSorted(arr2, n2)) {
        printf("arr2[] is sorted in ascending order.\n");
    } else {
        printf("arr2[] is not sorted in ascending order.\n");
    }

    return 0;
}
