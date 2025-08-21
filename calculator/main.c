#include <stdio.h>

int main() {

    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    char operator = '\0';

    printf("CALCULATOR IN C!!!\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Choose the operator (+ - * /): ");
    scanf(" %c", &operator); // clear \n from input buffer
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;  
    default:
        printf("Choose a valid operator!");
        break;
    }

    printf("The answer is: %.2lf", result);

    return 0;
}