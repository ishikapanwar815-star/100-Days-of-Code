#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}