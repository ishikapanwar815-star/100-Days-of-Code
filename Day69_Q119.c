#include <stdio.h>

int main()
{
    int n, i, x = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        x = x ^ a[i];

    printf("Repeated element = %d", x);

    return 0;
}