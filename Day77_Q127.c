#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("File error!");
        return 0;
    }

    while ((ch = fgetc(in)) != EOF)
        fputc(toupper(ch), out);

    fclose(in);
    fclose(out);

    printf("Conversion completed!");

    return 0;
}