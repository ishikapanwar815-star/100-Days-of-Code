#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;

    switch(r) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;
    }

    return 0;
}