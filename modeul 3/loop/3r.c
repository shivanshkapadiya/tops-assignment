#include<stdio.h>
int main()
{
	int a,num,even=0,odd=0,even_sum=0,odd_sum=0;

	for(a=1;a<=10;a++)
	{
	printf("\ninput the num %d=",a);
	scanf("%d",&num);
	
	if(num%2==0)
	{
		
		even++;
		even_sum=num+even_sum;
		
	}
	
	else {
		
		
		odd++;
		odd_sum=num+odd_sum;
	}
	}
	printf("\n%d",even);
	printf("\n%d",odd);
	printf("\n%d even sum ",even_sum);
	printf("\n%d odd sum",odd_sum);
return 0;	
}



//here we apply if and else statement,
// 1-if number is divsibale by 2 so they printf this number is even number ,and again go to in loop.
// 2-else odd number is print.
// also addition number after print even and odd.
// the sum of number is print in even_sum and in odd_sum,by using addition operator.
// lastly print how many odd number and hoe many even number .using simple 'printf' statement,
