#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1.0;
        else
            sum += (double)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
