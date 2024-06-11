#include<stdio.h>
int main()
{
	int num1,num2;
	char opr;
	printf("input the two num");
	printf(" input the num1=");
	
	scanf("%d",&num1);
	printf("\n input the ope=");
	
	scanf(" %c",&opr);
	if (opr=='+' || opr=='-' || opr=='*' || opr=='/')
	{
	
	printf("\n inputthe num2=");
	scanf("%d",&num2);
	
	switch(opr){
	case '+':
	{
		
		printf("%d+%d=%d",num1,num2,num1+num2);
		
		break ;
	}
	
	case '-' :
		{
			printf("%d-%d=%d",num1,num2,num1-num2);
			break;
					}
					
	case '*':
	{
	printf("%d*%d=%d",num1,num2,num1*num2);	
				break;
					}	
					
	case '/':
	{
	printf("%d/%d=%d",num1,num2,num1/num2);	
	if(num2==0)
	{
		printf("the num 2 is zero ,so not valide");
	}
				break;
					}						
					
	defult :
	{
		printf("not valide");
		break;
						}					
					
						
}

}
else 
{
	printf("no hoy baka");
}
		return 0;
}
