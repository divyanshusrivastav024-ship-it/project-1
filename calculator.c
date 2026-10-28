#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("=================================\n");
    printf("       CALCULATOR PROJECT\n");
    printf("=================================\n");

    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Exit\n");

        printf("\nEnter your choice (1-6): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            return 1;
        }

        if (choice >= 1 && choice <= 5) {
            printf("Enter first number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid number!\n");
                return 1;
            }

            printf("Enter second number: ");
            if (scanf("%lf", &num2) != 1) {
                printf("Invalid number!\n");
                return 1;
            }
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5:
                if (num2 == 0) {
                    printf("Error! Modulus by zero is not allowed.\n");
                } else if (num1 != (int)num1 ||
                           num2 != (int)num2) {
                    printf("Modulus requires whole numbers.\n");
                } else {
                    printf("Result = %d\n",
                           (int)num1 % (int)num2);
                }
                break;

            case 6:
                printf("Thank you for using the calculator!\n");
                break;

            default:
                printf("Invalid choice! Please select 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}