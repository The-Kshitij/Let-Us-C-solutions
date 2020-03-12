#include<stdio.h>
int main()
{
	int i,j,terms=1,c=0;
	for (i=1;i<=10;i++)
	{
		for (j=1;j<=4-terms;j++)
			printf(" ");
		while (terms!=c)
		{
			printf("%d ",i+c);
			c++;
		}
		terms++;
		i=i+c-1;
		c=0;
		printf("\n");
	}
	return 1;
}
