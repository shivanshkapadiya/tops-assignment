#include<stdio.h>
int main()
{
	int num,i,fac=1;
	printf("input the num=");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
	fac=fac*i;	
	}
	printf("\n %d",fac);
	return 0;
}

// here user input the number and they got a factorial .
// first we want input value from user side ,so we can get input from user for using scanf.
// then take loop condition - take number from the user and step by step reduce them and take multiplay.
// factoriyal print of total number multiplication.
//and printf output.
