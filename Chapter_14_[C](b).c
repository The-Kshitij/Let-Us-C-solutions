#include<stdio.h>
int main()
{
	int i,j,max;
	int arr[5][5];
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("Enter the value of element[%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			if (max<arr[i][j])
				arr[i][j]=max;
		}
	}
	printf("Largest Number: %d",max);
	return 1;
}
