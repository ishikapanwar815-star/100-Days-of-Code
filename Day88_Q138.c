#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY };

int main() {
    char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY"};

    for(int i = 0; i < 5; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}