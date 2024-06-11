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
// first we apply for loop for get range to addition number .
// after for loop we apply if and else condition (it just for + symbol).
// in if and else condition i is a variable that sum with sum+i;
// and printf i,
// after complete for loop we print sum. 


	
	
	
	
	
