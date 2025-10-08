#include<stdio.h>

//Electricity bill calculation:
//= 100 units: 5 per unit
//100 units: 8 per unit
//Compute and print total bill.


int main()
{

	int unit,bill;
	
	printf("Enter the Units : ");
	scanf("%d",&unit);//75
	
	if(unit <= 100){
		bill = 100 * 5; // 100 * 5 ==> 500
	}
	
	if(unit > 100){
		bill = bill + (unit-100) * 8;
	}	
	
	printf("Total Bill : %d",bill);

 return 0;
}
