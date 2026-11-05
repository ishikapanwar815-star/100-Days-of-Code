#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, count, max = 0;

    printf("Enter string: ");
    scanf("%999s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for(j = i; s[j] != '\0'; j++)
        {
            int k, found = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    found = 1;
                    break;
                }
            }

            if(found)
                break;

            count++;
        }

        if(count > max)
            max = count;
    }

    printf("Length = %d", max);

    return 0;
}