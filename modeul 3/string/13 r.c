#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100], result[100];
    int i, j = 0;
    printf("input the string ");
    fgets(str, sizeof(str), stdin); 
    for(i = 0; str[i] != '\0'; ++i) {
        if(isalpha(str[i])) {
            result[j++] = str[i];        
		}
    }
    result[j] = '\0';
    printf("\nString  %s", result);
    return 0;
}

