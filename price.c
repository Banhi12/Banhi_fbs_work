#include <stdio.h>

void main() {
    int pr;
    float dis = 0.0, diff;
    char ch;

    printf("Enter price of the thing: ");
    scanf("%d", &pr);

    printf("Enter Y if you are a student otherwise enter N: ");
    scanf(" %c", &ch); // note the space before %c

    if (ch == 'Y' || ch == 'y') { // student
        if (pr >= 500) {
            dis = 0.20 * pr;
            printf("You are a student and purchased >=500, discount = 20%%\n");
        } else {
            dis = 0.10 * pr;
            printf("You are a student and purchased <500, discount = 10%%\n");
        }
    } else { 
        if (pr >= 600) {
            dis = 0.15 * pr;
            printf("You are not a student and purchased >=600, discount = 15%%\n");
        } else {
            dis = 0.0;
            printf("You are not a student and purchased <600, no discount.\n");
        }
    }

    diff = pr - dis;
    printf("Discount amount: %.2f\n", dis);
    printf("Final price after discount: %.2f\n", diff);
}

