#include <stdio.h>

int main() {
    int n, k, i;
    int a[100], b[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);
    k = k % n;

    for (i = 0; i < n; i++) {
        b[(i + k) % n] = a[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
