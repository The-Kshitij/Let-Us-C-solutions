#include<stdio.h>
int main()
{
	int i,j,k,t,size,m;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++)
		{
			if (arr[j]<arr[i])
			{
				for (k=0;k<i;k++)
				{
					if (arr[k]>arr[j])
						break;
				}
				t=k;
				m=arr[j];
				for (k=j;k>t;k--)
					arr[k]=arr[k-1];
				arr[k]=m;
			}
		}
	}
	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
	return 1;
}
