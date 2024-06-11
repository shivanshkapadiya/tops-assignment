#include<stdio.h>
int main()
{
	int num,rev,i,rem;
	printf("input the num=");
	scanf("%d",&num);
	while(num!=0)
	{
		
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;

		//rev=num/10
		
		
		
	}
	// num==0
	// num%rev
	printf("%d rev",rev);
	
	
	return 0;
}
