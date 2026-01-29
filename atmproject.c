#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000.0, withdraw, deposit;

    printf("===== Welcome to ATM =====\n");

    // PIN Check
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);

                if (withdraw <= 0) {
                    printf("Invalid amount!\n");
                }
                else if (withdraw > balance) {
                    printf("Insufficient balance!\n");
                }
                else {
                    balance -= withdraw;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance: %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);

                if (deposit <= 0) {
                    printf("Invalid amount!\n");
                }
                else {
                    balance += deposit;
                    printf("Amount deposited successfully.\n");
                    printf("Updated Balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using ATM. Visit again!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
