#include <stdio.h>

int main() {
    int n, key, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int low = 0, high = n - 1;
    int mid, found = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
