#include <stdio.h>

int main()
{
    int n, k, i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Kth smallest = %d", a[k-1]);

    return 0;
}