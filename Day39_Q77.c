#include <stdio.h>

int main() {
    int a[10][10], n, i, j, distinct = 1;

    scanf("%d %d", &n, &j);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
