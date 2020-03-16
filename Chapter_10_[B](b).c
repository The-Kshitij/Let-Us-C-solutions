#include<stdio.h>
int prime(int n,int i);
int main()
{
	int n,i,j,process,c;
	printf("Enter the number: ");	
	scanf("%d",&n);
	printf("Prime factors are:\n");
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			process=0;
			for (j=2;j<i;j++)
			{
				if (i%j==0)
				{
					process=1;
					break;
				}
			}
			if (process==0)
				printf("%d ",i);
		}
	}
	printf("\nEnter the number: ");
	scanf("%d",&n);
	printf("Prime Factors are: \n");
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			c=prime(i,2);
			if (c==i)
				printf("%d ",i);
		}
	}
	return 1;
}
int prime(int n,int i)
{
	if (i==n)
		return i;
	else if (n%i==0)
		return i;
	else
		return prime(n,i+1);
}
