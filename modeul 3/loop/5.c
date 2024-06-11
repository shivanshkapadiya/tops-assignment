#include<stdio.h>
int main()
{
	int num,i,fac=1;
	printf("input the num");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
	fac*=i;	
	}
	printf("\n %d",fac);
	return 0;
}
