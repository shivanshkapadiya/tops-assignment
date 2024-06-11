#include<stdio.h>
int main()
{
	
	// to check biggest num.
	int num1,num2,num3;
	printf("inpu the num=");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("num1 is biggest");
	
	}
	
	
	else if(num2>num1 && num2>num3)
	{
		printf("\n num2 is biggest");
	}

	else
	
{
	printf("\n num3 is biggest");
}
	
	
	return 0;
}
