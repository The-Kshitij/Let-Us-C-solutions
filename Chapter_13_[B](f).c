#include<stdio.h>
int main()
{
	int i,min,arr[25],p=0;
	for (i=0;i<25;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&arr[i]);
		if (p==0)
		{
			min=arr[i];
			p=1;
		}
		else
		{
			if (arr[i]<min)
				min=arr[i];
		}
	}
	printf("Smallest Number: %d",min);
	return 1;
}
