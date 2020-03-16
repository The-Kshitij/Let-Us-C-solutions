#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,i,j,fac;
	while (1)
	{
	printf("\n1-Factorial of a number \n2-Prime or not \n3-Odd or even \n4-Exit\nSelect an option: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("Enter the number: ");
			scanf("%d",&i);
			fac=i;
			for (j=1;j<i;j++)
				fac=fac*j;
			printf("%d!= %d\n",i,fac);
			break;
		
		case 3:
			printf("Enter the number: ");
			scanf("%d",&i);
			if (i%2==0)
				printf("%d is an even number\n",i);
			else
				printf("%d is an odd number\n",i);
			break;
		
		case 2:
			fac=0;
			printf("Enter the number: ");
			scanf("%d",&i);
			for (j=2;j<i;j++)
				if (i%j==0)
				{
					printf("%d is a not prime number\n",i);
					fac=1;
					break;
				}
			if (fac==0)
				printf("%d is a prime number\n",i);
			break;
		
		case 4:
			exit(0);
			
		default:
			printf("!!INVALID CHOICE!!\n");
	}
	}
	return 1;
}
