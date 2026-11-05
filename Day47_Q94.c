#include <stdio.h>
#include <string.h>

int main()
{
    char s[200],word[50],longest[50];
    int i=0,j=0,max=0;

    gets(s);

    while(1)
    {
        if(s[i]!=' ' && s[i]!='\0')
        {
            word[j++]=s[i];
        }
        else
        {
            word[j]='\0';

            if(j>max)
            {
                max=j;
                strcpy(longest,word);
            }

            j=0;
        }

        if(s[i]=='\0')
            break;

        i++;
    }

    printf("%s",longest);
    return 0;
}