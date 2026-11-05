#include <stdio.h>

int main() {
    int n, i, j, left, right;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        left = 0;
        right = 0;

        for(j = 0; j < i; j++)
            left += a[j];

        for(j = i + 1; j < n; j++)
            right += a[j];

        if(left == right) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}