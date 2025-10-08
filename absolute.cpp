//Write a program to find the absolute value of a number.


#include<stdio.h>

int main()
{
	int num;
	
	printf("Enetr the Number : ");
	scanf("%d",&num); // -12
	
	
	if(num < 0){ // -12 < 0 ==> t 
		num = -num; // num = -num 
					// -12 = -(-12)
					// num = -12 = 12 
					// num = 12  
	}

	printf("Absolute Number is %d",num); // 12
 	return 0;
}
