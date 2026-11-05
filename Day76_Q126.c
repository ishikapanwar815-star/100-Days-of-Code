#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], str[100];

    printf("Enter filename: ");
    scanf("%s", name);

    fp = fopen(name, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!");
    }
    else {
        printf("File opened successfully.\n");

        while (fgets(str, 100, fp) != NULL)
            printf("%s", str);

        fclose(fp);
    }

    return 0;
}