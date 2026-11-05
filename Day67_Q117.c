#include <stdio.h>

int main()
{
    int m, n, i, j, k = 0;

    printf("Enter sizes: ");
    scanf("%d %d", &m, &n);

    int a[m], b[n], c[m+n];

    printf("Enter first array: ");
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter second array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;

    while(i < m && j < n)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < m)
        c[k++] = a[i++];

    while(j < n)
        c[k++] = b[j++];

    printf("Merged array: ");

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}