#include <stdio.h>
int i;
int isPrime(int n) {
    if (n < 2) return 0;
    for ( i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int choice;
    printf("Enter choice:\n"
           "1: even or odd\n"
           "2: prime or not\n"
           "3: palindrome\n"
           "4: positive / negative / zero\n"
           "5: reverse number\n"
           "6: sum of digits\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int x;
            printf("Enter the number to check even or odd: ");
            scanf("%d", &x);
            if (x % 2 == 0)
                printf("%d is an even number.\n", x);
            else
                printf("%d is an odd number.\n", x);
            break;
        }
        case 2: {
            int x;
            printf("Enter the number to check prime or not: ");
            scanf("%d", &x);
            if (isPrime(x))
                printf("%d is a prime number.\n", x);
            else
                printf("%d is not a prime number.\n", x);
            break;
        }
        case 3: {
            int x, original, rev = 0, rem;
            printf("Enter the number to check palindrome: ");
            scanf("%d", &x);
            original = x;
            while (x != 0) {
                rem = x % 10;
                rev = rev * 10 + rem;
                x /= 10;
            }
            if (rev == original)
                printf("%d is a palindrome.\n", original);
            else
                printf("%d is not a palindrome.\n", original);
            break;
        }
        case 4: {
            int x;
            printf("Enter a number to check positive / negative / zero: ");
            scanf("%d", &x);
            if (x > 0)
                printf("%d is positive.\n", x);
            else if (x < 0)
                printf("%d is negative.\n", x);
            else
                printf("The number is zero.\n");
            break;
        }
        case 5: {
            int x, original, rev = 0, rem;
            printf("Enter the number to reverse: ");
            scanf("%d", &x);
            original = x;
            while (x != 0) {
                rem = x % 10;
                rev = rev * 10 + rem;
                x /= 10;
            }
            printf("Reverse of %d is %d\n", original, rev);
            break;
        }
        case 6: {
            int x, sum = 0, rem;
            printf("Enter the number to sum digits: ");
            scanf("%d", &x);
            while (x != 0) {
                rem = x % 10;
                sum += rem;
                x /= 10;
            }
            printf("Sum of digits is %d\n", sum);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

