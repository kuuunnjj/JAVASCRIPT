#include <stdio.h>

// Function prototypes
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, num1, num2;

    while (1) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                if (num2 == 0) {
                    printf("Cannot divide by zero!\n");
                } else {
                    printf("Division of %d and %d is %d\n", num1, num2, division(num1, num2));
                }
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// User-defined functions
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}
