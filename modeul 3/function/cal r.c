#include<stdio.h>
 void add();
 void sub(int a,int b);
 int mul();
 int div(int a,int b);
void mod ();
 int main()
{
int choice,a,b,c;
printf("input :-\n1add \n2sub \n3into \n4div \n5mod\n");	
scanf("%d",&choice);

switch(choice)
{
	case 1:
		{
			add();
			break;
			
		}
		case 2:
		{
			printf("input 2 value");
			scanf("%d%d",&a,&b);
			sub(a,b);
			break;
			
		}
		case 3:
		{
			printf("input %d", mul());
			
			break;
			
		}
		case 4:
		{
		printf("input the 2 number=");
		scanf("%d%d",&a,&b);	
		printf(" %d",div(a,b) );
		break;	
		}
		case 5:
		{
		mod();
			break;
			
		}
		default:{
			printf("not ");
			break;
		}
		
		
		

	
}
	
	
	return 0;	
	}
	
	void add()
	{ int a,b;
		printf("input two ");
		scanf("\n%d%d",&a,&b);
		printf("\%d +  %d=%d",a,b,a+b);
	}
	
	void sub(int a,int b)
	{
		printf("%d-%d=%d",a,b,a-b);
	}
	
	int mul()

{
	int a,b;
	
	
	return a*b;
	}	
	
	
	int div(int a,int b)
	{
		printf("division of two number =");
		
		return a/b;
	}
	
	void mod ()
	{
		int a,b,c;
		printf("input the number");
		scanf("%d%d",&a,&b); 
		c=a%b;         
		printf("%d",c);
		
	}
//		void add()
//	{ int a,b;
//		printf("input two ");
//		scanf("\n%d%d",&a,&b);
//		printf("\%d +  %d=%d",a,b,a+b);
//	}
	
	
