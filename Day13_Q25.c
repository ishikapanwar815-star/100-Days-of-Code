#include <stdio.h>

int main() {
    double a, b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("%.2g", a + b); break;
        case '-': printf("%.2g", a - b); break;
        case '*': printf("%.2g", a * b); break;
        case '/':
            if (b != 0)
                printf("%.2g", a / b);
            else
                printf("Division by zero not allowed");
            break;
        case '%':
            if (a == (int)a && b == (int)b && b != 0)
                printf("%d", (int)a % (int)b);
            else
                printf("Modulo requires integers and nonzero divisor");
            break;
        default: printf("Invalid operator");
    }

    return 0;
}