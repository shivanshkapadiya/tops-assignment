#include <stdio.h>

int main() {
    int number,i,digit,largest_digit=0;;
    printf("input the num=");
	scanf("%d",&number);

    for  (i=1;i<=number;i++) {
         digit = number % 10; 
        if (digit > largest_digit) {
            largest_digit = digit; 
        }
        
        number =number/10; 
    }

    printf("The largest digit is %d\n", largest_digit);

    return 0;
}

