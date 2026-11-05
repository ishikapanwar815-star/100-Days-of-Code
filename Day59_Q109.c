#include <stdio.h>

int main() {
    int n, k, i, j, sum, max;

    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    max = -999999;

    for(i = 0; i <= n - k; i++) {
        sum = 0;

        for(j = i; j < i + k; j++)
            sum += a[j];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}