#include <stdio.h>


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Division by zero is not possible!\n");
        return 0;
    }
}

int main() {

    float num1, num2, result;
    int choice;

    while (1) {

        printf("\n===== SIMPLE CALCULATOR =====\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        if (choice == 5) {
            printf("Exiting Calculator...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {

            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            case 4:
                result = divide(num1, num2);
                printf("Result = %.2f\n", result);
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}