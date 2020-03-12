#include<stdio.h>
int main()
{
	int r,i,m,j,k,l;
	printf("Enter the range: ");
	scanf("%d",&r);
	for (i=1;i<=r;i++)
		for (j=1;j<=r;j++)
			for (k=1;k<=r;k++)
				for (l=1;l<=r;l++)
					if (i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
						if (i*i*i+j*j*j==k*k*k+l*l*l)
							printf("%d\n",i*i*i+j*j*j);
	return 1;
}
