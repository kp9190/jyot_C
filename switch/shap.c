#include<stdio.h>
/*
Processing:
Use if-else statements to check the choice.
Calculate the area using the correct formula:
Circle → π × r²
Rectangle → length × breadth
Triangle → 0.5 × base × height
Square → side × side
*/


int main(){

    int choice;
    float Pi =3.14,r,Area,l,b;

    printf("\n1) ---> Cricle");
    printf("\n2) ---> Rectangle");
    printf("\n3) ---> Triangle");
    printf("\n4) ---> Square");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("Cricle");
        printf("\nEnter the Cricle R : ");
        scanf("%f",&r);
        Area = Pi * r * r;
        printf("Area of Cricle : %.2f",Area);
    }else if(choice == 2)
    {
        printf("Rectagle");
        printf("\nEnter the Rectagle L : ");
        scanf("%f",&l);
        printf("\nEnter the Rectagle B : ");
        scanf("%f",&b);
        Area = l * b;
        printf("Area of Rectagle : %.2f",Area);
    }else if(choice == 3)
    {
        printf("Triangle");
    }else if(choice == 4)
    {
        printf("Square");
    }else{
        printf("your choice is Invelid !");
    }
    return 0;
}