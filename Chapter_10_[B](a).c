#include<stdio.h>
int s(int num,int sum);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	s(num,0);
	int sum=0;
	while (num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("\nSum of digits: %d",sum);
	return 1;
}
int s(int num,int sum)
{
	if (num==0)
		printf("Sum of digits: %d",sum);
	else
	{
		sum+=num%10;
		num=num/10;
		return s(num,sum);
	}
}
