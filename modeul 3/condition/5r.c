#include<stdio.h>
int main()
{
	int num1;
	printf("input the num=");
	scanf("%d",&num1);
	
	if(num1>0)
	{
		printf("positive");
	}
	else if(num1==0)
	{
		printf("the num is nutural");
	}
	else
	{
		printf("negative");
	}
	
	
	
	return 0;
	
}
