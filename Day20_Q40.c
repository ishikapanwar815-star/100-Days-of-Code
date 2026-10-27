#include <stdio.h>

int main() {
    long long n, result = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit == 0)
            result = result + place;

        n = n / 10;
        place = place * 10;
    }

    printf("%lld", result);

    return 0;
}
