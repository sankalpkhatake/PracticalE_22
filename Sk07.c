#include <stdio.h>

int main() {
    
    float num1, num2, result;
    char operator;

   
    printf("Enter first number: ");
    scanf("%f", &num1);

    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // The space before %c is to consume any leftover newline character.

    
    printf("Enter second number: ");
    scanf("%f", &num2);

    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
