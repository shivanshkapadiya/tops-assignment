#include<stdio.h>
int main()
{
	int n,b,i,sum=0;
	printf("input the num=");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		if(i<n)
		{
		printf("%d+",i);
		sum=sum+i;
		}
		else 
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf("=");
	printf("%d",sum);
	return 0;
}
	
	
	
	
	
