#include <stdio.h>

int isArmstrong(int x) {
    int original = x;
    int rem, sum = 0;
    while (x != 0) {
        rem = x % 10;
        sum += rem * rem * rem;
        x /= 10;
    }
    return (sum == original);
}

int main() {
    int low, high, i;
    printf("Enter the range (low high): ");
    if (scanf("%d %d", &low, &high) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    if (low > high) {
        // swap or error
        int tmp = low;
        low = high;
        high = tmp;
    }
    printf("Armstrong numbers between %d and %d are:\n", low, high);
    for (i = low; i <= high; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

