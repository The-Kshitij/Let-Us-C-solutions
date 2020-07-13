#include<stdio.h>
int main()
{
	int i,j,r,c,cnt=0;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
	int arr[r][c];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter the value of element[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (arr[i][j]==arr[j][i])
				cnt++;
		}
	}
	if (cnt==r*c)
		printf("The matrix is symmetric\n");
	else
		printf("The matrix is not symmetric");
	return 1;
}
