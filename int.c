// 6. Interest Calculator
// Description: Calculate Simple or Compound Interest based on user choice.
// Input: Enter choice: 1
       // Enter Principal: 10000
       // Enter Rate: 5
       // Enter Time: 2
// Output: Simple Interest = 1000.00

//pow (value1 , value2)

// 2^3 ==> pow(2,3)

// Simple Interest = ( p x r x t )/ 100
// Compound Interest = P × (1 + R/100)^T - P
#include<stdio.h>
#include<math.h>

int main(){

    int choice;
    float pr, rate, time, ints, amount;

    printf("\n1) --> Simple Interest");
    printf("\n2) --> Compound Interest");
    
    printf("\nEnter Your Choice (1 or 2): ");
    scanf("%d",&choice);
    
    printf("Enter Principal: ");
    scanf("%f", &pr);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    switch(choice){
        case 1: ints = (pr * rate * time)/100;
                printf("\nSimple Interest = %.2f\n",ints);
        break;
        
        case 2: amount = pr * pow(1 + rate/100,time);
                ints = amount - pr;
                printf("\nCompound Interest = %.2f\n",ints);
        break;
        default : printf("\nInvelid Choice");
    }
    return 0;
}
