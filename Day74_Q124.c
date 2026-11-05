#include <stdio.h>

int main() {
    FILE *s, *d;
    char a[50], b[50];
    int ch;

    printf("Enter source file: ");
    scanf("%s", a);

    printf("Enter destination file: ");
    scanf("%s", b);

    s = fopen(a, "r");
    d = fopen(b, "w");

    if (s == NULL || d == NULL) {
        printf("File error!");
        return 0;
    }

    while ((ch = fgetc(s)) != EOF)
        fputc(ch, d);

    fclose(s);
    fclose(d);

    printf("File copied successfully!");

    return 0;
}