#include<stdio.h>
int main()
{
	int day;
	printf("input days between 1 to 7=");
	scanf("%d",&day);
	
	switch(day)
	
	case 1:
	{
		printf("\n mon");
		break;
			
	
	case 2:
		
			printf("\n tus");
			break;
		
	
	case 3:
		
			printf("\n wed");
		break;
	
	case 4:
	
			printf("\n thus");
		
	case 5:
		
			printf("\n fri");
			break;
		
	
	case 6:
		
			printf("\n sat");
		break;
	
	case 7:
		
			printf("\n sun");
			break;
	
	default:
		
			printf("not valid");
		
	
	
}
	
	return 0;
	
	
	
	
}
