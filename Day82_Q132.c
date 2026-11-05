#include <stdio.h>

enum Traffic {RED, YELLOW, GREEN};

int main()
{
    enum Traffic light;

    printf("Enter light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", (int*)&light);

    switch(light)
    {
        case RED: printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN: printf("Go"); break;
        default: printf("Invalid value");
    }

    return 0;
}