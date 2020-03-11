#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,num,sum=0,num2,c=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	num2=num;
	while (num2!=0)
	{
		num2=num2/10;
		c++;
	}
	num2=num;
	while (num2!=0)
	{
		i=num2%10;
		sum+=pow(i,c);
		num2=num2/10;
	}
	if (sum==num)
		printf("%d is an armstrong number\n",num);
	else
		printf("%d is not an armstrong number\n",num);
	return 1;
}
