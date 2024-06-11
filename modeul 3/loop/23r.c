#include<stdio.h>
int main()
{
	int a,i,b,num;
	printf("input the num");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}
	return 0;
}
