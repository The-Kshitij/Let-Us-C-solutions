#include<stdio.h>
int main()
{
	int yr;
	printf("Enter a year: ");
	scanf("%d",&yr);
	if ((yr%4==0 && yr%100!=0) || (yr%400==0))
		printf("It's a leap year.");
	else
		printf("It's not a leap year.");
	return 1;
}
