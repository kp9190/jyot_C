// 10. ATM Operations
// Display a menu for basic ATM functions. Use switch to perform the selected operation
// with simple arithmetic (use a variable balance).
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
            
// Input:
// Enter your choice: 2
//Enter amount to deposit: 5000
// Output:
// ₹5000 deposited successfully.Updated Balance = ₹15000

#include<stdio.h>
int main(){
    int ch,balance=5000,deposit,withsraw;

    printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1 : printf("\nCheck Balance\n");
                printf("Your Balance : %d",balance);
            break;
        case 2 : printf("\nDeposit Money\n");
                printf("Enter Deposit Amount : ");
                scanf("%d",&deposit);
                balance = balance + deposit; 
                printf("your new Balance : %d",balance);
            break;
        case 3 : printf("\nWithdraw Money\n");
                printf("Enter Withdraw Amount : ");
                scanf("%d",&withsraw);
                balance = balance - withsraw; 
                printf("your new Balance : %d",balance);
            break;
        case 4 : printf("Exit..");
            break;
    
    default: printf("Invalid Choice !!");
        break;
    }

    return 0;
}


