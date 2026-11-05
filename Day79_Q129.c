#include <stdio.h>

int main() {
    FILE *fp;
    int n, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f", (float)sum / count);
    }
    else
        printf("No numbers found!");

    return 0;
}