#include<stdio.h>
int main()
{
	int a;
	printf("input your height=");
	scanf("%d",&a);
	
	if(a>=170)
	{
		printf("you are tall");
	}
	
	else if(a>=140)
	{
		printf("you are avereg");
	}
	
	else 
	{
		printf ("short");
	}
	
	
	return 0;
}
