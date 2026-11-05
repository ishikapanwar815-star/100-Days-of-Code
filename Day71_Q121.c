#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data saved successfully!");

    return 0;
}