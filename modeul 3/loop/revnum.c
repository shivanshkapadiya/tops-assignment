#include<stdio.h>
int main()
{
	int num,rev,i,rem,pal;
	printf("input the num=");
	scanf("%d",&num);
	pal=num;
	while(num!=0)
	{
		
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;

		//rev=num/10
		
		
		
	}
	// num==0
	// num%rev
	if(rev==pal)
	{
		printf("it a pal");
	}
	else
	{
	
	printf(" it not pal");
}
	
	return 0;
}
