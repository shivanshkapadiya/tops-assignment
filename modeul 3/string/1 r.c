#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,len=0;
	char name[50];
	printf("input the b a string : ");
	fgets(name,sizeof(name),stdin);
	while(name[i]!='\0') {
			i++;
			len++;
		}
	printf("out %d",len-1);
	return 0;
}
