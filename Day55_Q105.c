#include <stdio.h>

int main() {
    int n, i, j, count, found = -1;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        count = 0;

        for(j = 0; j < n; j++) {
            if(a[i] == a[j])
                count++;
        }

        if(count > n / 2) {
            found = a[i];
            break;
        }
    }

    printf("%d", found);

    return 0;
}