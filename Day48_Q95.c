#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[200];

    scanf("%s %s",a,b);

    strcpy(c,a);
    strcat(c,a);

    if(strlen(a)==strlen(b) && strstr(c,b)!=NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}