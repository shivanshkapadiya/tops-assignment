#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],arr_add[2][2];
	int i,j;
	printf("input the value");
	
	
	//1
	printf("input yor frist matrix=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	
	printf("input your second matrix");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	
	}
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr_add[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d ",arr_add[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
