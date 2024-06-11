#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,i;
	printf("input the num=");
	scanf("\n%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,(n*i));
	}
	return 0;
}
