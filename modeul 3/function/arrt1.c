#include<stdio.h>

int main()
{
	int i,n;
	printf("input the size of array");
	scanf("%d",&n);
    int arr1[n],arr2[n],sum_arr[n];
	
	printf("---input the 1st array---");
	
	for(i=0;i<n;i++)
	{
		
		printf("\ninput %d value",i);
		scanf("%d",&arr1[i]);
	}
	printf("---input the 2nd array---");
	
	for(i=0;i<n;i++)
	{
		printf("\ninput %d value",i);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum_arr[i]=arr1[i]+arr2[i];
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("\n%d is index :%d is value",i,sum_arr[i]);
	}
	
	return 0;
	
	
}
