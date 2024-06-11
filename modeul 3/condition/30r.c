#include<stdio.h>
int main()
{
	float  a,b,c;
	printf("input the price=");
	scanf("%f",&a);
	
	if(a>=256)
	{
	
	
	b=0.18;
	printf(" tax price = %f",a*b);
	
	c=a+(a*b);
	printf("\n total amount to pay =%f",c);
	
}


else 
{
	printf("go back to your home ");
}
	return 0;
	
	
	
}
