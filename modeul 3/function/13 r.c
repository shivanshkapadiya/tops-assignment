#include<stdio.h>
int main()
{   
	int i,a[5];
	
	for(i=0;i<=4;i++)
	{
		printf("\ninput the  %d no=",i+1);
		scanf(" %d",&a[i]);	


if(a[i]%2==0)
{
	printf("\n%d is even",a[i]);
}

else
{
	printf("\n %d is odd",a[i]);
}


}
	return 0;
}
