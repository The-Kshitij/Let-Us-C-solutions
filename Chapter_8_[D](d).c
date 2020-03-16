#include<stdio.h>
void leap(int n);
int main()
{
	int yr;
	printf("Enter the year: ");
	scanf("%d",&yr);
	leap(yr);
	return 1;
}
void leap(int n)
{
	if (n%400==0)
		printf("%d is a leap year",n);
	else if (n%4==0 && n%100!=0)
		printf("%d is a leap year",n);
	else
		printf("%d is not a leap year",n);		
}
