#include<stdio.h>
int main()
{
	int i,j,n,fac=1,size=7;
	double term=0;
	for (i=1;i<=size;i++)
	{
		n=1;
		fac=i;
		while (n!=i)
		{
			fac=fac*n;
			n++;
		}
		term+=(n/(float)fac);
	}
	printf("%lf",term);
	return 1;
}
