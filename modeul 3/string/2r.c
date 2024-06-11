#include <stdio.h>
#include <stdlib.h>
int main()
{
int i=0;
char s[100]; 
printf("input the string = ");
fgets(s,sizeof(s),stdin);
printf("\nSeperating  the string =\n");
    while(s[i]!='\0'){
       printf("%c\t", s[i]);
       i++;
    }
    return 0;
}

