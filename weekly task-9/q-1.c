#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
