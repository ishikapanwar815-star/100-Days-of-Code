#include <stdio.h>

int main() {
    int n, i, x, pos;
    scanf("%d", &n);
    int a[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &x, &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
