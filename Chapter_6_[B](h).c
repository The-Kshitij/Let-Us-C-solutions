#include<stdio.h>
int main()
{
	int i,j,k;
	for (i=1;i<=30;i++)
	{
		for (j=1;j<i;j++)
		{
			for (k=1;k<i;k++)
				if (k*k+j*j==i*i)
					printf("%d %d %d\n",j,k,i);
		}
	}
	return 1;
}

