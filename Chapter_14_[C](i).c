#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,r1=3,c1=3,r2=3,c2=3,k,e;
	int arr1[r1][c1],arr2[r2][c2];
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			printf("Enter the element[%d][%d] for first matrix: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n\n");
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			printf("Enter the element[%d][%d] for second matrix: ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	int arr[r1][c2];
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c2;j++)
		{
			e=0;
			for (k=0;k<c1;k++)
				e+=arr1[i][k]*arr2[k][j];
			arr[i][j]=e;
		}
	}
	printf("\n\n");
	printf("Result of multiplication:\n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c2;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 1;
}
