#include<iostream>
using namespace std;


int main()
{
	int m1,m2,m3;
	
	pritnf("Enter the marks m1 : ");
	scanf("%d",&m1);
	if(m1 > 0 && m1 < 100){
		pritnf("Enter the marks m2 : ");
		scanf("%d",&m2);
		if(m2 >0 && m2 <100){
			pritnf("Enter the marks m3 : ");
			scanf("%d",&m3);
			if(m3 > 0 && m3 <100){
				
				avg = (m1 + m2 + m3)/3; 
				printf("avge : %d",avg);
			}else{
				printf("Marks is not Valide!!");
			}
		}else{
			printf("Marks is not Valide!!");
		}
	}else{
		printf("Marks is not Valide!!");
	}
	
	
	
 return 0;
}
