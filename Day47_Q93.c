#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    int i,j,count=0;

    scanf("%s %s",a,b);

    if(strlen(a)!=strlen(b))
    {
        printf("Not anagrams");
        return 0;
    }

    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                b[j]='*';
                count++;
                break;
            }
        }
    }

    if(count==strlen(a))
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}