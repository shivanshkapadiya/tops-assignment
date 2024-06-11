#include<stdio.h>
int main()
{
	
	int num1,num2,num3,max;
	printf("input frist num=");
	scanf("%d",&num1);
	printf("input second num=");
	scanf("%d",&num2);
	printf("input the third num=");
	scanf("%d",&num3);
	
	printf("--------------------");
	 max_num = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

printf("\n %d",max); 
	return 0;
}
