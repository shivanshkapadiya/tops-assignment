#include<stdio.h>
void square();

 void rec(int a,int b,int c);
 int mul();
 int div(int a,int b);
void mod ();
 int main()
{
int choice,a,b,c;
printf("input :-\n1square \n2rectangle \n3into \n4div \n5mod\n");	
scanf("%d",&choice);

switch(choice)
{
	case 1:
		{
			square();
			break;
			
		}
		case 2:
		{
			
			printf("input 2 value length and width");
			scanf("%d%d",&a,&b);
			c=a*b;
				rec(a, b, c);
			
			
			break;
			
		}
		case 3:
		{  
			printf("input %d", mul());
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("%d",c);
			
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
	
	//----------------------------------//
	void square()
	{ int a,b,c;
		printf("input two ");
		scanf("\n%d",&a);
		c=a*a;
		printf("%d",c);
		
	}
	
	void rec(int a,int b,int c)
	{
		printf("%d",c);
	}
	
	
	int mul()
{
	int a,b;
		printf(" %d",div(a,b) );	
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
	
	
