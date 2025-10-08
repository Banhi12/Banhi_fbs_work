#include<stdio.h>

void main() {
    int i, n, fac, sum = 0, temp, rem;

    printf("Enter a number to check if it is a Strong number: ");
    scanf("%d", &n);

    temp = n;

    while(n != 0) {
        rem = n % 10;   
        fac = 1;     

        for(i = 1; i <= rem; i++) {
            fac = fac * i;
        }

        sum = sum + fac;  
        n = n / 10;       
    }

    if(temp == sum)
        printf("%d is a Strong number.\n", temp);
    else
        printf("%d is not a Strong number.\n", temp);
}

