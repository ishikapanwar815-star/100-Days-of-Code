#include <stdio.h>

int main()
{
    char s[100];
    int i,last=0;

    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            printf("%c.",s[i+1]);

        if(s[i]==' ')
            last=i+1;
    }

    printf("%s",s+last);
    return 0;
}