#include <stdio.h>

// userneam == 101
// password == 1234

int main()
{

	// Predefined username and password
	int user = 101;
	int pass = 1234;

	// User Enter Data
	int uid, upass,ch,balance = 5000,deposit,withsraw;

	printf("\nEnter Your user ID : ");
	scanf("%d", &uid);

	// User ID == username = 101
	if (uid == user)
	{
		printf("\nEnter Your Password : ");
		scanf("%d", &upass);

		if (upass == pass)
		{
			// printf("\nLogin successful!");

			printf("\nWelcome To ATM ");

			printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit");
			printf("\nEnter your choice: ");
			scanf("%d", &ch);

			switch (ch)
			{
			case 1:
				printf("\nCheck Balance\n");
				printf("Your Balance : %d", balance);
				break;
			case 2:
				printf("\nDeposit Money\n");
				printf("Enter Deposit Amount : ");
				scanf("%d", &deposit);
				balance = balance + deposit;
				printf("your new Balance : %d", balance);
				break;
			case 3:
				printf("\nWithdraw Money\n");
				printf("Enter Withdraw Amount : ");
				scanf("%d", &withsraw);
				balance = balance - withsraw;
				printf("your new Balance : %d", balance);
				break;
			default:
				printf("Invalid Choice !!");
				break;
			}
		}
		else
		{
			printf("\nPassword is Invelid!!");
		}
	}
	else
	{
		printf("\nUsername is Invelid!!");
	}

	return 0;
}

// Electricity bill calculation:
//= 100 units: 5 per unit
// 100 units: 8 per unit
// Compute and print total bill.

// int main()
// {

// 	int unit,bill;

// 	printf("Enter the Units : ");
// 	scanf("%d",&unit);//75

// 	if(unit <= 100){
// 		bill = 100 * 5; // 100 * 5 ==> 500
// 	}

// 	if(unit > 100){
// 		bill = bill + (unit-100) * 8;
// 	}

// 	printf("Total Bill : %d",bill);

//  return 0;
// }
