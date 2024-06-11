#include<stdio.h>
int main()
{
	int maths,sci,ss,a,b,total,pr;
	printf("input the three sub marks");
	scanf("%d%d%d",&maths,&sci,&ss);
	total=(maths+sci+ss);
	pr=total/3;
	printf("%d",pr);
	if (pr>=80)
	{
		printf("\na grade");
	}
	else if (pr>=60)
	{
		printf("\nB grade");
	}
	else if(pr>=35)
	{
		printf(" \nC grade");
		
	}
	else {
		printf("\nfail");
	}
	return 0;
}
