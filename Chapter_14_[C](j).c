#include<stdio.h>
int main()
{
	int i,j,k,c,p[4][5],p1[4][5];
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
		{
			printf("Enter element[%d][%d]: ",i,j);
			scanf("%d",&p[i][j]);
		}
	for (i=0;i<4;i++)
	{
		j=0;c=0;
		while (c!=4)
		{
			j=j+2;
			if (j>=4)
				j=j-4;
			p1[i][c]=p[i][j];
			j++;
			c++;
		}
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
			printf("%d ",p1[i][j]);
		printf("\n");
	}
	return 1;
}
