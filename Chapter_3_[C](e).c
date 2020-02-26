#include<stdio.h>
int main()
{
	int num=0,rev_num=0,number=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	number=num;
	while (number!=0)
	{
		rev_num=rev_num*10+number%10;
		number=number/10;
	}
	if (num==rev_num)
		printf("The given number and it's reversed number are equal");
	else
		printf("The given number and it's reversed number are not equal");
	return 1;
}
