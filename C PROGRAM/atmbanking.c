#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
	int pin=1234, option, enteredpin, count=0;// amount=1;
	//option=looking balance,withdrawing money etcetc; count=no of wrong entered pin ; amount=amount of withdrawn money
	//float balance=40000;// available balance
	//int continuetransaction = 1;//continuing process or stoping
	unsigned long amount=10000, deposit, withdraw;
	int k;
	char transaction ='y';
	time_t now;
	time(&now);
	printf("\t\t\t\t\t\t%s",ctime(&now));
	printf("\t\t\t\t================SIDDHARTHA BANK LIMITED====================");
	
	while(pin!=enteredpin){
		printf("\nplease enter your pin :");
		scanf("%d",&enteredpin);
		if (enteredpin!= pin){
			Beep (610 , 500);//Beep(frequency,time in millisec)
			printf("INVALID PIN!!");
			
		}
		count++;
		if(count == 3 && enteredpin!=pin){
			exit (0);
		}
	}
			do
	{
		printf("\n\n\t\t\t\t********Welcome to ATM Service**************");
		printf("\n\t\t\t\t==============AVAILABLE TRANSACTIONS==========");
		printf("\n\t\t\t\t1. Check Balance");
		printf("\n\t\t\t\t2. Withdraw Cash");
		printf("\n\t\t\t\t3. Deposit Cash");
		printf("\n\t\t\t\t4. Quit");
		//printf("****************?**************************?*\n");
		printf("\n\t\t\t\t\t     Please select the option : ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %lu ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 500 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 500");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS %lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS %lu", amount);
			break;
		case 4:
			printf("\n THANK U USING ATM");
			break;
		default:
			printf("\n INVALID OPTION!!!");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\t\t\t\t==== THANKS FOR USING OUR ATM SERVICE!!!====");	
}
