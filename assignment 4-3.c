#include <stdio.h>

int main() {
    int a, b,n,i,sum=0,tmp;
    printf("Enter the range (a b): ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        // swap so a = b
         tmp = a;
        a = b;
        b = tmp;
    }

    printf("Perfect numbers between %d and %d are:\n", a, b);
    for ( n = a; n <= b; n++) {
        if (n <= 1) {
            continue;  // 1, 0 or negatives are not perfect
        }
        int sum = 1;  // 1 is a proper divisor of all n > 1

        // find divisors from 2 to sqrt(n)
        for ( i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                int other = n / i;
                if (other != i) {
                    sum += other;
                }
            }
        }

        if (sum == n) {
            printf("%d\n", n);
        }
    }

    return 0;
}

