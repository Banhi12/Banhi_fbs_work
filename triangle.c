#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("It is an equilateral triangle.\n");
    }
    else if (a == b || a == c || b == c) {
        printf("It is an isosceles triangle.\n");
    }
    else {
        printf("It is a scalene triangle.\n");
    }

    return 0;
}

