#include<stdio.h>

int main()
{
	int m1,m2,m3;
	float avg;
	printf("Enter the marks m1 : ");
	scanf("%d",&m1);
	if(m1 > 0 && m1 < 100){
		printf("Enter the marks m2 : ");
		scanf("%d",&m2);
		if(m2 >0 && m2 <100){
			printf("Enter the marks m3 : ");
			scanf("%d",&m3);
			if(m3 > 0 && m3 <100){
				avg = (m1 + m2 + m3)/3; 
				printf("avge : %.2f",avg);
			}else{
				printf("Marks is not Valide!!");
			}
		}else{
			printf("Marks is not Valide!!");
		}
	}else{
		printf("Marks is not Valide!!");
	}
	
	
	if(avg > 90 && avg < 100){ //98
		printf("Grade : A");
	}else if(avg > 80 && avg < 89)
	{ 
		printf("Grade : B");
	}else if(avg > 70 && avg < 79)
	{ 
		printf("Grade : B");
	}else{
		printf("Sorry your are Fail !!");
	}
	
 return 0;
}
