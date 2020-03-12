#include<stdio.h>
int main()
{
	int i,j,c=0;
	printf("Prime Numbers are:\n");
	for (i=1;i<300;i++)
	{
		c=0;
		for (j=2;j<i;j++)
			if (i%j==0)
			{
				c++;
				break;
			}
		if (c==0)
			printf("%d ",i);
	}
	return 1;
}

