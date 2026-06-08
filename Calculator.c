#include <stdio.h>5+5
#include <stdlib.h>

void displayMenu() {
    printf("\n=== C Calculator ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        displayMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select an option between 1 and 5.\n");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Invalid numeric input.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is undefined!\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
        }
    }
    return 0;
}