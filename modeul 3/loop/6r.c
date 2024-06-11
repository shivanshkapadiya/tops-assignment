#include<stdio.h>
int main()
{
	int i,a=0,b=1,n,c;
	printf("input the number=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf(" %d",a);
		c=a+b;
		a=b;
		b=c;
		
	}	
	return 0;
}
// here use one loop and print a,the is starting value is 0 and starting value og b=1.
// then the a and b addition perfrom ,both value put in c.
// then  we compaire a with b ,so now b value is put in a,also with c and b.

 
