#include<stdio.h>
int main()
{
	int leap_days,req_day,yr,day;
	printf("Enter the current year: ");
	scanf("%d",&yr);
	leap_days=(yr-1)/4-(yr-1)/100+(yr-1)/400;//helps know the number of leap days during this period,therefore if the year is divisible by 100 it is subtracted
	day=((yr-1)*365+leap_days)%7;
	if (day==0)
		printf("Monday");
	else if (day==1)
		printf("Tuesday");
	else if (day==2)
		printf("Wednesday");
	else if (day==3)
		printf("Thursday");
	else if (day==4)
		printf("Friday");
	else if (day==5)
		printf("Saturday");
	else
		printf("Sunday");
	return 1;
}
