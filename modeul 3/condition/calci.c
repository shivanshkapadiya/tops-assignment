#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if(operator == '+') {
        result = num1 + num2;
    } else if(operator == '-') {
        result = num1 - num2;
    } else if(operator == '*') {
        result = num1 * num2;
    } else if(operator == '/') {
        if(num2 == 0) {
            printf("Error! Division by zero.");
            return 1;
        }
        result = num1 / num2;
    } else {
        printf("Error! Invalid operator.");
        return 1;
    }

    printf("Result: %.2f\n", result);

return 0;
}
