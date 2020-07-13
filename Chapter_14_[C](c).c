#include<stdio.h>
int main()
{
	int i,j,r=4,c=4;
	int arr[r][c];
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
		{
			printf("Enter the value of element[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	printf("You entered :\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	printf("\nTranspose is: \n");
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
			printf("%d ",arr[j][i]);
		printf("\n");
	}
	return 1;
}
