#include<stdio.h>
int main()
{
	// area of rectangle prism 
	int wl,hl,hw,a;
	printf("input the value of wl=");
	scanf("%d",&wl);
	printf("input the value of hl=");
	scanf("%d",&hl);
	printf("input the value of hw= ");
	scanf("%d",&hw);
	
	a=2*(wl+hl+hw);
	printf("%d",a);

	return 0;
}
