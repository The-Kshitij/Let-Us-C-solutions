#include<stdio.h>
int main()
{
	int num=0,rev_num=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while (num!=0)
	{
		rev_num=rev_num*10+(num%10);
		num=num/10;
	}
	printf("Reversed Number is %d",rev_num);
	return 1;
}
