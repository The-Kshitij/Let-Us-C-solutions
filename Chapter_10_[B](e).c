#include<stdio.h>
int sum(int s,int i);
int main()
{
	printf("The sum of first 25 natural numbers");
	sum(0,0);
	return 1;
}
int sum(int s,int i)
{
	if (i==25)
		printf("\nSum: %d",s);
	else
	{
		s+=i;
		return sum(s,i+1);
	}
}
