#include <stdio.h>

int main() {
    char str[100], temp;
    int i, len = 0;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    str[len] = '\0';

    printf("%s", str);

    return 0;
}
