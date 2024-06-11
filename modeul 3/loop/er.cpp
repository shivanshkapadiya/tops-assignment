#include <stdio.h>

int main() {
    int num, i;
    int = 1;

    printf("input the value ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error:\n");
        return 0;
    }

    // Calculate factorial
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = int \n", num, factorial);

    return 0;
}

