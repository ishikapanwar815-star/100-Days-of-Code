#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i,j,start;

    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            start=i;

            while(s[i]!=' ' && s[i]!='\0')
                i++;

            for(j=i-1;j>=start;j--)
                printf("%c",s[j]);

            if(s[i]==' ')
                printf(" ");
        }
    }
    return 0;
}