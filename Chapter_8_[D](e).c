#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("Enter the number: ");	
	scanf("%d",&n);
	printf("Prime factors are:\n");
	prime(n);
	return 1;
}
void prime(int n)
{
	int i,j,process=0;
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
}
