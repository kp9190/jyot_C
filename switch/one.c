#include<stdio.h>
//  Switch 
/*
    muti choose 

    switch(choose)
    {
        case CH : code1 ;
            break;

        case CH : code1 ;
            break;

        case CH : code1 ;
            break;

    }

    break --> exit the block 
*/


int main(){
    int ch;

    printf("Enter your choose : ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1: printf("Number one"); 
            break;
        case 2: printf("Number 2"); 
            break;
        case 3: printf("Number 3"); 
            break;
        case 4: printf("Number 4"); 
            break;
        default : printf("This is Default Case !!");
    }
    return 0;
}













