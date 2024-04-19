#include <stdio.h>

void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;

    printf("Intersection of the two arrays: ");

    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 

    findIntersection(arr1, n1, arr2, n2);

    return 0;
}
