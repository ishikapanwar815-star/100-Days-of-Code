#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int a[26] = {0}, i;

    printf("Enter two strings: ");
    scanf("%99s %99s", s, t);

    if(strlen(s) != strlen(t))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; s[i] != '\0'; i++)
    {
        a[s[i] - 'a']++;
        a[t[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(a[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}