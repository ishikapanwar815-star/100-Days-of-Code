#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    int total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}