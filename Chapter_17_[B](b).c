#include<stdio.h>
struct bank
{
	long int account_number;
	char name[50];
	float balance;
};
void balance_below100(struct bank b[],int size);
int main()
{
	int i,size,response;
	float amt;
	char name[50];
	printf("Enter the number of customers: ");
	scanf("%d",&size);
	struct bank b[size];
	for (i=0;i<size;i++)
	{
		fflush(stdin);
		printf("Enter the name: ");
		gets(b[i].name);
		printf("Enter the Balance: ");
		scanf("%f",&b[i].balance);
		printf("Enter the account number: ");
		scanf("%ld",&b[i].account_number);
	}
	balance_below100(b,size);
	fflush(stdin);
	printf("Enter your name: ");
	gets(name);
	for (i=0;i<size;i++)
	{
		if (strcmp(b[i].name,name)==0)
		{
			printf("To withdraw enter 0 and to deposit enter 1: ");
			scanf("%d",&response);
			if (response==0)
			{
				printf("Enter the amount: ");
				scanf("%f",&amt);
				printf("Account Number: %ld 0\n",b[i].account_number);
				if (b[i].balance-amt<100)
					printf("The balance is insufficient for the specified withdrawl\n");
				else
				{
					b[i].balance-=amt;
					printf("Balance left: %f",b[i].balance);
				}
			}
			else
			{
				printf("Enter the amount: ");
				scanf("%f",&amt);
				printf("Account Number: %ld 1\n",b[i].account_number);
				b[i].balance+=amt;
				printf("Balance : %f",b[i].balance);
			}
		}
	}
	return 1;
}
void balance_below100(struct bank b[],int size)
{
	int i,flag=0;
	for (i=0;i<size;i++)
	{
		if (b[i].balance<100)
		{
			printf("%s\nAccount Number: %ld\n",b[i].name,b[i].account_number);
			flag=1;
		}
	}
	if (flag==0)
		printf("!!No Such Record Found!!\n");
}
