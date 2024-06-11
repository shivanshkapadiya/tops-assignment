#include<stdio.h>
int main()
{   int i;
	char a[5][50];
	
	for(i=0;i<=4;i++)
	{
		printf("input the  %d no=",i+1);
		scanf(" %s",&a[i]);	
}

for(i=0;i<=4;i++)
{
	printf(" %s",a[i]);
	}	
	
	return 0;
}
