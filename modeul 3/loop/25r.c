#include <stdio.h>

int main()
 {
    int n,i,totalSum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    

    for ( i = 1; i <= n; i++) {
        totalSum += i * (i + 1) / 2;
    }
    
	

    printf("The sum of the series is: %d\n", totalSum);
}

    return 0;
}
