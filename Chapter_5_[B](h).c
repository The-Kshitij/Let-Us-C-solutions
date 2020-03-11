#include<stdio.h>
#include<math.h>
int main()
{
	int num,oct=0,r,i=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while (num>0)
	{
		r=num%8;
		num=num/8;
		oct+=pow(10,i)*r;
		i++;
	}
	printf("Octal Number: %d",oct);
	return 1;
}
