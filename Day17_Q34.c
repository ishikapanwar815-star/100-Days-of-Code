#include <stdio.h>

int main() {
    int n, i, prime = 1;

    scanf("%d", &n);

    if (n < 2)
        prime = 0;

    for (i = 2; i <= n / i && prime; i++) {
        if (n % i == 0)
            prime = 0;
    }

    if (prime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
