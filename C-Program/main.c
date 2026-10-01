#include <stdio.h>

int main(void){
    int x;
    int y;
    int sum;
    int difference;
    int product;
    int quotient;
    printf("Enter two integers\n");
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    printf("You entered: %d and %d\n", x, y);
    sum = x + y;
    difference = x - y;    
    product = x * y;
    quotient = x / y;
    printf("The sum of two numbers: %d\n", sum);
    printf("The difference between two numbers: %d\n", difference);
    printf("The product of two numbers: %d\n", product);
    printf("The q4uotient of two numbers: %d\n", quotient);

    return 0;
}
