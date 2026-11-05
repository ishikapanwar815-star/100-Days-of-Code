#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("File error!");
        return 0;
    }

    printf("Enter new text: ");
    getchar();
    fgets(str, 100, stdin);

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("Text appended successfully!");

    return 0;
}