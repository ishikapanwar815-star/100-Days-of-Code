#include <stdio.h>

int main()
{
    int n, i, sum, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sum = max = a[0];

    for(i = 1; i < n; i++)
    {
        if(sum + a[i] < a[i])
            sum = a[i];
        else
            sum = sum + a[i];

        if(sum > max)
            max = sum;
    }

    printf("Maximum sum = %d", max);

    return 0;
}