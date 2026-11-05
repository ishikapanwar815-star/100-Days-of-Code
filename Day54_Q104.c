#include <stdio.h>

int main() {
    int n, x;
    int sum = 0, left = 0;

    scanf("%d", &n);

    for(x = 1; x <= n; x++)
        sum += x;

    for(x = 1; x <= n; x++) {
        left += x;

        if(left == sum - left + x) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}