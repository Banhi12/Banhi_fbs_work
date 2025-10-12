#include <stdio.h>

int main() {
    int start, end,t,j,i,n,sum=0,rem;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    if (start > end) {
        t = start;
        start = end;
        end = t;
    }

    printf("Strong numbers between %d and %d:\n", start, end);

    for ( j = start; j <= end; j++) {
        n = j;
        sum = 0;

        while (n > 0) {
            rem = n % 10;
            n = n / 10;

            int fac = 1;
            for (i = 1; i <= rem; i++) {
                fac = fac * i;
            }

            sum += fac;
        }

        if (sum == j) {
            printf("%d is a Strong number.\n", j);
        }
    }

    return 0;
}

