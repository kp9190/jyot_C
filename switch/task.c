// 1. Calculator Program
// Description:
// Write a program to perform basic arithmetic operations (Addition, Subtraction, Multiplication, Division) using a switch case.
// Menu Example:
// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Divide
// 5. Exit

#include <stdio.h>

int main()
{

    int num1, num2, ch;

    printf("Enter the Number1 : ");
    scanf("%d",&num1);
    printf("Enter the Number2 : ");
    scanf("%d",&num2);
    
    printf("\n1) ---> Addition\n2) ---> Subtraction\n3) ---> Multiplication\n4) ---> Division\n5) ---> Exit");
    printf("\nEnter the Choose (1 to 4): ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("\nAddition\n");
        printf("Add : %d",num1+num2);
        break;
    case 2:
        printf("\nSubtraction\n");
        printf("Sub : %d",num1-num2);
        break;
    case 3:
        printf("\nMultiply\n");
        printf("Mult : %d",num1*num2);
        break;
    case 4:
        printf("\nDivide\n");
        printf("Div : %d",num1/num2);
        break;
    case 5 : printf("Exit...");
        break;
    default:
        printf("\nInvelid choose!!");
        break;
    }

    return 0;
}
