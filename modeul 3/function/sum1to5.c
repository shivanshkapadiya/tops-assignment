#include<stdio.h>
int main()
{
	
	printf("%d",sum(5));
	return 0;
}

int sum(int n)
{
	if(n>=1)
	{
		return n+sum(n-1);
	}
	else {
		return 0;
		// 5+4+3+2+1=15.
	}
}
