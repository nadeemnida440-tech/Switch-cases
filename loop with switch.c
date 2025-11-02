#include <stdio.h>

int main() {
    int choice;
    double a, b, result;

    do {
        printf("\nSimple Calculator (switch)\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Cannot divide by zero!\n");
                } else {
                    result = a / b;
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 5);

    return 0;
}

