#include<stdio.h>
int main()
{
	long int pop=100000,i=1;
	while (i<=10)
	{
		pop=pop+pop*0.1;
		i++;
	}
	printf("Population: %ld",pop);
	return 1;
}
