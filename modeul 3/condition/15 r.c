#include<stdio.h>
int  main()
{
int maths ,phy ,che ,maths_phy ,total,n,c;
printf("------input your sub marks------");

printf("\ninput your maths marks=");
scanf("%d",&maths);
printf("input your phy matrks=");
scanf("%d",&phy);
printf("input your che marks=");
scanf("%d",&che);

total=maths+phy+che;
printf("%d\n", total);

c=maths+phy;
printf("%d\n", c);

if(maths>=65&&phy>=55&&che>=50&&c>=140&&total>=190)
{
	printf("ok");
}

else
{
	printf("get out");
}
	
return 0;	
}
