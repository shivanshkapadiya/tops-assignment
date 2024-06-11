#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max_num;

   
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    
    max_num = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    
    printf("The maximum number is: %.2f\n", max_num);

    return 0;
}

