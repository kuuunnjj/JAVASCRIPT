#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 15, 25};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int min = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest element in the array is: %d\n", min);

    return 0;
}
