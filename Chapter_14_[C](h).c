#include<stdio.h>
int main()
{
	int i,j,r=3,c=3;
	int arr1[r][c],arr2[r][c],arr[r][c];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter the element[%d][%d] for matrix 1: ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter the element[%d][%d] for matrix 2: ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			arr[i][j]=arr1[i][j]+arr2[i][j];
	printf("\n\nResultant of addition the two matrices: \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 1;
}
