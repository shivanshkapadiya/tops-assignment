#include<stdio.h>
int main()
{
	int i,j,m;
	for(i=0;i<=9;i++)
	{
//		printf(" ");
		for(j=0;j<=i;j++)
		{
			for(m=0;m<=i;m++)
			{
			printf(" ");
		}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


