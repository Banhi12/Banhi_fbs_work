#include <stdio.h>

int main() {
    int mins, h, min;

    printf("Enter total minutes: ");
    scanf("%d", &mins);

    h = mins / 60;     
    min = mins % 60;        

    printf("Hour(s): %d\n", h);
    printf("Minute(s): %d\n", min);

    return 0;
}

