#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id,age;
	
	char name [50],address[100];
};
int main()
{
	int i,n;
	printf("How many total emp :-- ");
	scanf("%d",&n);
	struct employee emp[n];
	for(i=0;i<n;i++){
		printf("Enter employee %d ID      : ",i+1);
		scanf("%d",&emp[i].id);
		
		printf("Enter employee %d Name    : ",i+1);
		scanf("%s",&emp[i].name);
	//	fgets(emp[i].name , 50 , stdin);
		
	//	printf("Enter employee %d Address : ",i+1);
	//	fgets(emp[i].address , 100 , stdin);
		
		printf("Enter employee %d Age     : ",i+1);
		scanf("%d",&emp[i].age);
	}
	for(i=0;i<n;i++){
		printf("\nID of Employee %d is %d",i+1,emp[i].id);
		printf("\nName of Employee %d is %s",i+1,emp[i].name);
	//	printf("\nAddress of Employee %d is %s",i+1,emp[i].address);
		printf("\nAge of Employee %d is %d",i+1,emp[i].age);
	}
	return 0;
}
