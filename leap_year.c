#include<stdio.h>


int main()
{

	int year;
	
	printf("Enter the Year  : ");
	scanf("%d",&year);
	
	if(year%400 == 0)
	{
		printf("this is  leap year");
	}else{
		printf("this is not leap year");
	}
	return 0;
}
