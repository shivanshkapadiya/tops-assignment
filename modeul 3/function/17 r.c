#include<stdio.h>

struct employee1{
	int id;
	char name[10];
};


union employee2{
	int id;
	char name[10];
};
int main()

{
struct employee1 emp1;
union employee2 emp2;

printf("input the id and name in structure=");
scanf("%d %s",&emp1.id,&emp1.name);
printf("the id and name in structureis %d & %s",emp1.id,emp1.name);


printf("\ninput the id of union=");
scanf("%d",&emp2.id);
printf("\n the id of union %d",emp2.id);

printf("\ninput the name of union=");
scanf(" %s",&emp2.name);
printf("\n the name of union %s",emp2.name);

	return 0;
}
