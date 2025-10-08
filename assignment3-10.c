#include<stdio.h>
void main(){
	int n,first,last,sum;
	printf("Enter a number to add 1st digit and last digit:");
	scanf("%d",&n);
    last = n % 10;

    while (n >= 10) {
        n = n / 10;  
    }
    first = n;      

    sum = first + last;

    printf("Sum of first and last digit = %d\n", sum);

}
