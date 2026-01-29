#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("\npresenting simple program calculater\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Choose an option or number between 1 to 4:\n");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("thanks for using this c Calculator...\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Result = %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Result = %.2f\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0) 
                    printf("Result = %.2f\n", num1 / num2);
                else
                    printf("ERROR! NOT devisiable by zero.\n");
                break;

            default:
                printf("INVILED CHOICE! PLEASE TRY AGIN.\n");
        }
    }

    return 0;
}