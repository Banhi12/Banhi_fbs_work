#include <stdio.h>

int main() {
    int a, b, i, j;
    printf("Enter a range of number from 1 to n: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        int count = 0;  

        if (i < 2) {
            printf("%d is not a prime number.\n", i);
            continue;
        }

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count > 0) {
            printf("%d is not a prime number.\n", i);
        } else {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}
 
