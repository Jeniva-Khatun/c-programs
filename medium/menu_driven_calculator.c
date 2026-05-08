#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
        return 0;
    }
    return a % b;
}

void displayMenu() {
    printf("\n===== Calculator Menu =====\n");
    printf("0. Enter values of a and b\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus Division\n");
    printf("6. Exit\n");
}

int main() {
    int a = 0, b = 0;
    int choice;
    int hasInput = 0;

    while (1) {
        displayMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 0:
                printf("Enter value of a: ");
                scanf("%d", &a);

                printf("Enter value of b: ");
                scanf("%d", &b);

                hasInput = 1;
                break;

            case 1:
                if (!hasInput) {
                    printf("Please enter values first.\n");
                    break;
                }

                printf("Addition: %d + %d = %d\n", a, b, add(a, b));
                break;

            case 2:
                if (!hasInput) {
                    printf("Please enter values first.\n");
                    break;
                }

                printf("Subtraction: %d - %d = %d\n", a, b, subtract(a, b));
                break;

            case 3:
                if (!hasInput) {
                    printf("Please enter values first.\n");
                    break;
                }

                printf("Multiplication: %d * %d = %d\n", a, b, multiply(a, b));
                break;

            case 4:
                if (!hasInput) {
                    printf("Please enter values first.\n");
                    break;
                }

                printf("Division: %d / %d = %d\n", a, b, divide(a, b));
                break;

            case 5:
                if (!hasInput) {
                    printf("Please enter values first.\n");
                    break;
                }

                printf("Modulus: %d %% %d = %d\n", a, b, modulus(a, b));
                break;

            case 6:
                printf("Exiting calculator...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
