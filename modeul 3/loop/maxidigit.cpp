#include <stdio.h>

int main() {
    int number,i,digit ;
    printf("input the num=");
	scanf("%d",&number);
    int largest_digit = 0;

    for  (i=1;i<=number;i++) {
         digit = number % 10; // Extract the last digit
        if (digit > largest_digit) {
            largest_digit = digit; // Update the largest digit
        }
        number /= 10; // Remove the last digit
    }

    printf("The largest digit is %d\n", largest_digit);

    return 0;
}

