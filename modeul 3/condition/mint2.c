#include<stdio.h>
int main()
{
	int m,a,num;
	printf("input the num");
	scanf("%d",&num);
	
	if (num>0)
	{
		printf("1");
	}
	else if(num==0)
	{
		printf("0");
	}
	
	else 
	{
		printf("-1");
	}
	
	return 0;
}
