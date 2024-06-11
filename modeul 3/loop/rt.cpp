#include<stdio.h>
int main()
{
	int i,j,temp;
	char ch='A';
	temp=ch;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}
