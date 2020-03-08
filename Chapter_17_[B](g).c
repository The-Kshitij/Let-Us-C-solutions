#include<stdio.h>
struct date
{
	int day,month,year;
};
int com(struct date d1,struct date d2);
int main()
{
	int n;
	struct date d1,d2;
	printf("Enter the first date(dd-mm-yy,don't type 01,05,09 etc.): ");
	scanf("%d-%d-%d",&d1.day,&d1.month,&d1.year);
	printf("Enter the second date(dd-mm-yy,don't type 01,05,09 etc.): ");
	scanf("%d-%d-%d",&d2.day,&d2.month,&d2.year);
	n=com(d1,d2);
	printf("Value Returned: %d",n);
	return 1;
}
int com(struct date d1,struct date d2)
{
	if (d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)
		return 0;
	else
		return 1;
}
