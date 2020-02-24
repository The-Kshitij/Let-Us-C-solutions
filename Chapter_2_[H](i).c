#include<stdio.h>
int main()
{
	int amt,rs100,rs50,rs10,rs5,rs2,rs1;
	printf("Enter the value: ");
	scanf("%d",&amt);
	rs100=amt/100;
	amt=amt-rs100*100;
	rs50=amt/50;
	amt=amt-rs50*50;
	rs10=amt/10;
	amt=amt-rs10*10;
	rs5=amt/5;
	amt=amt-rs5*5;
	rs2=amt/2;
	amt=amt-rs2*2;
	rs1=amt/1;
	amt=amt-rs1*1;
	printf("Number of 100 Rs notes: %d\n",rs100);
	printf("Number of 50 Rs notes:  %d\n",rs50);
	printf("Number of 10 Rs notes:  %d\n",rs10);
	printf("Number of  5 Rs notes:  %d\n",rs5);
	printf("Number of  2 Rs notes:  %d\n",rs2);
	printf("Number of  1 Rs notes:  %d\n",rs1);
	return 1;
}
