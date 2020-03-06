#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the year: ");
	scanf("%d",&yr);
	yr%400==0?printf("It's a leap year"):(yr%100==0?printf("It's not a leap year"):(yr%4==0?printf("It's a leap year"):printf("It's not a leap year")));
	return 1;
}
