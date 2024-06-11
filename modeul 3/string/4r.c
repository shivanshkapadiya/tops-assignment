#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
int i=0,count=1;
char s[100];
printf("input the string = ");
fgets(s,sizeof(s),stdin);
    while(s[i]!='\0')
    {
        if(s[i]==' '&&s[i+1]!=' '){
		count++;
		}
		i++;    
    }
    printf("\n words in the string = %d", count);
}
