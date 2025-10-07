#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    printf("Enter two numbers for your operation: ");
    scanf("%d %d", &a, &b);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // note the space before %c — important!

    switch(op) {
        case '+':
            printf("The summation is %d\n", a + b);
            break;
        case '-':
            printf("The subtraction is %d\n", a - b);
            break;
        case '*':
            printf("The multiplication is %d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("The division is %d\n", a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}

