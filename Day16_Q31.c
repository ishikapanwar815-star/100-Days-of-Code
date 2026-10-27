#include <stdio.h>

int main() {
    int n, rem, place = 1, binary = 0;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("%d", binary);
    return 0;
}