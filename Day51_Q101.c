#include <stdio.h>

int main() {
    int n, target, i, first = -1, last = -1;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        if(a[i] == target) {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}