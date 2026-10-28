#include <stdio.h>

int main() {
    int n, i, x, pos = -1;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("-1\n");
        return 0;
    }

    for (i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
