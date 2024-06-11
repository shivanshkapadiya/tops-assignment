#include<stdio.h>
int main()
{
	int i,num;
	printf("input the num=");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d X %d= %d",num,i,num*i);
		
	}	
	return 0;
}

//here we want a table of some number so ,first we creat a for loop.
// first we get number form user ,so we use scanf function.
// then creat loop 1-10 beacuse of we print table 1 to 10.
// after creat a for loop we apply print statemet in printf statement.
// then after we apply logic in printf ,three %d apply 1.for scanf ,2-increment ,3-main output.
