#include<stdio.h>
int main()
{
	int n,r,sum=1,i;
	printf("input the number= ");
	scanf(" %d",&n);
	
	for(i=1;i<=n;i++)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digit=%d",sum);

	return 0;
	
}
// here we input the number then we find modulo of that number and add.
// after adding the number we can divide so they can remove to and loop.
// and we can 0
