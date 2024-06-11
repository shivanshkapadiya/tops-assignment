#include<stdio.h>
int main()
{
	float p,r,t,i,ci;
	printf("input the amount=");
	scanf("%f%f",&p,&r);
	printf("input your time period=");
	scanf("%f",&t);
	i=p*(pow(1+r/100,t));
	printf("%f",i);
	ci=i-p;
	printf("\n %f",ci);
	
	return 0;
}
