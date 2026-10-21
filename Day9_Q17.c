#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots\n");
        printf("Roots = %.2lf, %.2lf", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Two equal real roots\n");
        printf("Root = %.2lf", r1);
    }
    else {
        printf("Complex roots");
    }

    return 0;
}