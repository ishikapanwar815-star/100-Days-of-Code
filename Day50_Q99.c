#include <stdio.h>

int main()
{
    char date[20];

    scanf("%s",date);

    date[2]='\0';
    printf("%s-Apr-%s",date,date+6);

    return 0;
}