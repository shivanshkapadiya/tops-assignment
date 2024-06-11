#include<stdio.h>
int main()
{
	int a,b,c;
	printf("input two value");
	scanf("%d:%d",&a,&b);
	c=a;
	a=b;
	b=a;
	printf("\n%d:%d",b,c);
	return 0;
	
	
	
	
	
}
