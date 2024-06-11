#include<stdio.h>
#include<math.h>
int main()
{
	int num,rev,i,rem,p,a,ori,arm;
	printf("input the total num digit");
	scanf("%d",&p);
	printf("input the num");
	scanf("%d",&num);
	ori=num;
	while(num!=0)
	{
		rem=num%10;
		arm=arm+pow(rem,p);
		num=num/10;		
	}
	
	if(ori==arm)
	{
		printf("it a arm");
	}
	else
	{
	
	printf(" it not arm");
}
	
	return 0;
}
