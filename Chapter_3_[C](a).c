#include<stdio.h>
int main()
{
	float cp,sp;
	printf("Enter the following\nCost Price: ");
	scanf("%f",&cp);
	printf("Selling Price: ");
	scanf("%f",&sp);
	if (cp<sp)
		printf("The seller has made a profit of %f",sp-cp);
	else if (cp>sp)
		printf("The seller has made a loss of %f",cp-sp);
	else
		printf("The seller hasn't made any profit or incurred any loss");
	return 1;
}
