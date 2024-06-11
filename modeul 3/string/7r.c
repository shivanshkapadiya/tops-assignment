#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    printf("input the string 1= ");
    gets(s1);
    printf("\ninput the string 2=");
    gets(s2);
    strcpy(s2,s1);
    printf("\nString 1 copied to String 2\n");
    printf(" String 1 = %s", s1);
    printf("\n String 2 = %s", s2);
    return 0;
}
