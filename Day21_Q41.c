#include <stdio.h>

int main() {
    int n, temp, first, last, divisor = 1;

    scanf("%d", &n);
    temp = n;

    if (n >= 0 && n < 10) {
        printf("%d", n);
        return 0;
    }

    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;
    last = n % 10;

    int middle = (n % divisor) / 10;
    int result = last * divisor + middle * 10 + first;

    printf("%d", result);

    return 0;
}
