#include<stdio.h>
int main()
{
	float num1,num2,result;
	char ope;
	
	printf("input the  num=");
	scanf(" %f",&num1);
	printf("input the num=");
	scanf(" %f",&num2);
	
	printf("choose your operator=");
	scanf(" %c",&ope);
	
	if(ope =='+')
	{
	result=num1+num2;	
	}
	else if(ope =='-')
	{
		result=num1-num2;
	}
	else if(ope =='*')
	{
		result=num1*num2;
	}
	else if(ope =='/')
	{
	if(num2==0){printf("there is zero so,invalid");
	
	}
else 
{
	printf("not valide operator");
}
	result=num1/num2;
}



	printf(" result %.2f\n",result);
	
	
	
	return 0;
}

