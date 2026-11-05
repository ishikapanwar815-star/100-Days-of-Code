#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int c = 0, w = 0, l = 0, in = 0;

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        c++;

        if (ch == '\n')
            l++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            in = 0;
        else if (in == 0) {
            w++;
            in = 1;
        }
    }

    fclose(fp);

    printf("Characters = %d\n", c);
    printf("Words = %d\n", w);
    printf("Lines = %d\n", l + 1);

    return 0;
}