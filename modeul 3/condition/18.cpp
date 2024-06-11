#include<stdio.h>
int main()
{
	int sell,real;
	printf("input yor real amount=");
	scanf("\n%d",&real);
	printf("input the selling price=");
	scanf("\n%d",&sell);
	
	if(real>sell)
	{
		printf("loss");
		}	
	
	else 
	{
		printf("profit");
	}
	
	
	return 0;
}
